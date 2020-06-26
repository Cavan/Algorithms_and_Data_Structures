// ArrayADTClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ArrayADT.h"

#pragma warning(disable: 4996)

int main()
{
	Array* arr1;
	int ch, sz;
	int x, index;

	cout << "Enter Size of Array";
	scanf("%d", &sz);
	arr1 = new Array(sz);

	do
	{
		cout << "\n\nMenu\n";
		cout << "1. Insert\n";
		cout << "2. Delete\n";
		cout << "3. Search\n"; 
		cout << "4. Sum\n";
		cout << "5. Display\n";
		cout << "6. Exit\n";

		cout << "enter your choice ";
		cin >> ch;

		switch (ch)
		{
		case 1: 
			cout << "Enter an element and index ";
			cin >> x >> index;
			arr1->Insert(index, x);
			break;
		case 2:
			cout << "Enter index ";
			cin >> index;
			x = arr1->Delete(index);
			cout << "Deleted Element is" << x;
			break;
		case 3:
			cout << "enter element to search ";
			cin >> x;
			index = arr1->LinearSearch(x);
			cout << "Element index " << index;
			break;
		case 4:
			cout << "Sum is " << arr1->Sum();
			break;
		case 5:
			arr1->Display();
		}

	} while (ch < 6);
	return 0;
}

