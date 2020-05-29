#include <stdio.h>


void fun1(int n) {		// T(n)
	
	if (n > 0) {		// 1
		fun1(n - 1);	// T(n-1)
		printf("%d ", n); // 1
	}
}
//T(n) = T(n-1) + 2

//T(n) = { 1			n = 0
//		 { T(n-1) + 1 	n > 0


//T(n) = T(n-k) + k
// Time complexity O(n)

void fun2(int n) {
	
	if (n > 0) {
		printf("%d ", n);
		fun2(n - 1);
	}
}

// Static and Global Recursion
int fun3(int n)
{
	printf("\n");
	static int x = 0;
	if (n > 0) {
		x++;
		return fun3(n - 1) + x;
	}
}


// Tree Recursion
// Time Complexity is O(2^n)
// Space Complexity is O(n)
void treeRecursion(int n) {
	if (n > 0) {
		printf("%d ", n);
		treeRecursion(n - 1);
		treeRecursion(n - 1);
	}
}

//Taylor Series
double e(int x, int n) {
	static double p = 1, f = 1;
	double r;
	if (n == 0) {
		return 1;
	}
	else{
		r = e(x, n - 1);
		p = p * x;
		f = f * n;

		return r + p / f;
	}
}

//Taylor Series (Horner's Rule)
double e2(int x, int n) {
	static double s;
	if (n == 0) {
		return s;
	}
	s = 1 + x * s / n;
	return e2(x, n - 1);
}

//Taylor Series (Iterative)
double e3(int x, int n) {
	double s = 1;
	int i;
	double num = 1;
	double den = 1;

	for (i = 1; i <= n; i++) {
		num *= x;
		den *= i;
		s += num / den;
	}
	return s;
}


// Fibonacci Series (iterative)
int fibItr(int n) {
	int t0 = 0, t1 = 1, s = 0, i;

	if (n <= 1) return n;

		for (i = 2; i <= n; i++) {
			s = t0 + t1;
				t0 = t1;
				t1 = s;		
	}
		return s;

}

// Fibonacci Series (recursive)
int rfib(int n)
{
	if (n <= 1) return n;
	return rfib(n - 2) + rfib(n - 1);
}

// Fibonacci Series (recursive) modified for time complexity
int F[10];
void arrayInit() {
	int i;
	for (i = 0; i < 10; i++) {
		F[i] = -1;
	}
}
int mfib(int n) {
	if (n <= 1) {
		F[n] = n;
		return n;
	}
	else {
		if (F[n - 2] == -1) {
			F[n - 2] = mfib(n - 2);
		}
		if (F[n - 1] == -1) {
			F[n - 1] = mfib(n - 1);
		}
		F[n] = F[n - 2] + F[n - 1];
		return F[n - 2] + F[n - 1];
	}
}


// nCr (Combination Formula)
int fact(int n) {
	if (n == 0) return 1;
	return fact(n - 1) * n;
}

int nCr(int n, int r) {
	int num, den;

	num = fact(n);
	den = fact(r) * fact(n - r);

	return num / den;
}
// nCr (Combination Formula) recursive
int NCR(int n, int r) {
	if (n == r || r == 0) {
		return 1;
	}
	return NCR(n - 1, r - 1) + NCR(n - 1, r);
}


// Tower of Hanoi Problem
// Move 3 discs from Tower 1 to Tower 3
void TOH(int n, int A, int B, int C) {
	if (n > 0) {
		TOH(n - 1, A, C, B);
		printf("(From: %d, To: %d)\n", A, C);
		TOH(n - 1, B, A, C);
	}
}


//Quiz 1
int f_Q3(int& x, int c)

{

	c = c -1;

	if (c == 0) return 1;

	x = x + 1;

	//printf("%d \n", (f_Q3(x, c) * x));

	return f_Q3(x, c) * x;

}

int main() {
	
	int p = 5;

	printf("%d \n", f_Q3(p, p));


	return 0;
}