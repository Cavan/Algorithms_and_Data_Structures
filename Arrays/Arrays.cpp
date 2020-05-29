// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>



// Static vs Dynamic Arrays
void staticVsDynamic() {

	int A[5] = { 2,4,6,8,10 };
	int* p;
	int i;

	p = (int*)malloc(5 * sizeof(int));
	p[0] = 3;
	p[1] = 5;
	p[2] = 7;
	p[3] = 9;
	p[4] = 11;

	for (i = 0; i < 5; i++) {
		printf("%d ", A[i]);

	}
	printf("\n");
	for (i = 0; i < 5; i++) {
			printf("%d ", p[i]);
		}

	free(p);

}

// Array Size
void increaseArraySize() {
	int* p, * q;
	int i;
	p=(int*)malloc(5 * sizeof(int));
	p[0] = 3; 
	p[1] = 5;
	p[2] = 7;
	p[3] = 9;
	p[4] = 11;

	q = (int*)malloc(10 * sizeof(int));

	for (i = 0; i < 5; i++) {
		q[i] = p[i];

	}
	free(p);
	p = q;
	q = NULL;


	for (i = 0; i < 5; i++)
	{
		printf("%d \n", p[i]);
	}

}

// 2D Arrays
void twoDArray() {

	int A[3][4] = { {1,2,3,4},{2,4,6,8},{1,3,5,7} };
	int* B[3];
	int** C;
	int i, j;

	B[0] = (int*)malloc(4 * sizeof(int));
	B[1] = (int*)malloc(4 * sizeof(int));
	B[2] = (int*)malloc(4 * sizeof(int));

	C = (int**)malloc(3 * sizeof(int*));
	C[0] = (int*)malloc(4 * sizeof(int));
	C[1] = (int*)malloc(4 * sizeof(int));
	C[2] = (int*)malloc(4 * sizeof(int));

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	//free(B);
	free(C);
}





int main()
{
   
	//staticVsDynamic();
	//increaseArraySize();
	twoDArray();

}

