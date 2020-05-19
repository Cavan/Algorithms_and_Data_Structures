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

// Indirect Recursion




int main() {
	
	 //Tree Recursion
	treeRecursion(3);

	return 0;
}