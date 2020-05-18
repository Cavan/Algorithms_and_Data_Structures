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



int main() {
	
	int x = 3;
	fun1(x);
	printf("\n");
	fun2(x);

	return 0;
}