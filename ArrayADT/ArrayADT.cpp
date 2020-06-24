#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

using namespace std;

struct Array
{
	int A[10];
	int size;
	int length;
};

// Display the array
void Display(struct Array arr) {
	int i;
	printf("Elements are \n");
	for (i = 0; i < arr.length; i++) {
		printf("%d ", arr.A[i]);
	}
}

// Swap method
void swap(int* x, int* y) {
	int temp = *x;
		*x = *y;
		*y = temp;
}

//Append to the end of the array
void Append(struct Array* arr, int x) {
	if (arr->length < arr->size)
	{
		arr->A[arr->length++] = x;
	}
}

//Insert element into array
void Insert(struct Array* arr, int index, int x) 
{
	int i;
	if (index > 0 && index <= arr->length) 
	{
		for (i = arr->length; i > index; i--)
		{
			arr->A[i] = arr->A[i - 1];
		}
		arr->A[index] = x;
		arr->length++;
	}

}

// Delete an element from a given index
int Delete(struct Array* arr, int index) {
	int x = 0;
	int i;
	if (index >= 0 && index < arr->length) {
		x = arr->A[index];
		for (i = index; i < arr->length - 1; i++)
		{
			arr->A[i] = arr->A[i + 1];
		}
		arr->length--;
		return x;
	}
	return 0;
}

// Linear Search
int LinearSearch(struct Array* arr, int key) {
	int i;
	for (i = 0; i < arr->length; i++) {
		if (key == arr->A[i])
		{
			swap(&arr->A[i], &arr->A[0]);
			return i;
		}
	}
	return -1;
}


// Binary Search

int BinarySearch(struct Array arr, int key) {
	int l, mid, h;
	l = 0;
	h = arr.length - 1;
	while (l <= h)
	{
		mid = (l + h) / 2;
		if (key == arr.A[mid])
		{
			return mid;
		}
		else if(key<arr.A[mid])
		{
			h = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return -1;
}

// Recursive
int RBinSearch(int a[], int l, int h, int key)
{
	int mid = 0;
	if (l <= h)
	{
		mid = (l + h) / 2;
		if (key == a[mid])
		{
			return mid;
		}
		else if (key < a[mid])
		{
			return RBinSearch(a, l, mid - 1, key);
		}
		else
		{
			return RBinSearch(a, mid + 1, h, key);
		}
		return -1;
	}
}

// Get
int Get(struct Array arr, int index)
{
	if (index >= 0 && index < arr.length)
	{
		return arr.A[index];
	}
	return -1;
}

// Set
void Set(struct Array* arr, int index, int x)
{
	if (index >= 0 && index < arr->length)
	{
		arr->A[index] = x;
	}
}

// Max
int Max(struct Array arr)
{
	int max = arr.A[0];
	int i;
	for (i = 1; i < arr.length; i++)
	{
		if (arr.A[i] > max)
		{
			max = arr.A[i];
		}
	}
		return max;
}

// Min
int Min(struct Array arr)
{
	int min = arr.A[0];
	int i;
	for (i = 1; i<arr.length; i++)
	{
		if (arr.A[i] < min)
		{
			min = arr.A[i];
		}
	}
	return min;
}

// Sum
int Sum(struct Array arr)
{
	int s = 0;
	int i;
	for (i = 0; i < arr.length; i++)
	{
		s += arr.A[i];
	}
	return s;
}


// Avg
float Avg(struct Array arr)
{
	return (float)Sum(arr) / arr.length;
}

// Reverse
void Reverse(struct Array* arr)
{
	int* B;
	int i, j;
	B = (int*)malloc(arr->length * sizeof(int));
	for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
	{
		B[j] = arr->A[i];
	}
	for (i = 0; i < arr->length; i++)
	{
		arr->A[i] = B[i];
	}
}


// Reverse2
void Reverse2(struct Array* arr)
{
	int i, j;
	for (i = 0, j = arr->length - 1; i < j;i++, j--)
	{
		swap(&arr->A[i], &arr->A[j]);
	}
}



// Sorted


// Merge


// Set Operations





// main
int main() {

	struct Array arr1 = { {2,3,9,16,18,21,28,32,35},10,9 };
	
	Reverse(&arr1);
	Display(arr1);
	//Reverse2(&arr1);
	Display(arr1);


	return 0;
}