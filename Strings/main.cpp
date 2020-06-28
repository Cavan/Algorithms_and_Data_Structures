#include <stdio.h>
#include <stdlib.h>



//Count length of string
int stringLength(char* s)
{
	int i;
	for (i = 0; s[i] != '\0';i++) 
	{
		//Count number of character until \0 terminator is reached
	}          
	return i;
}

// Permutations
void getPermutations(char inputString[], int k)
{
	static int A[10] = { 0 };
	static char Res[10];
	int i;

	if (inputString[k] == '\0')
	{
		Res[k] = '\0';
		printf(Res);
	}
	else 
	{
		for (i = 0; inputString[i] != '\0'; i++)
		{
			if (A[i] == 0)
			{
				Res[k] = inputString[i];
				A[i] = 1;
				getPermutations(inputString, k + 1);
				A[i] = 0;
			}
		}

	}
}



int main() {


	char s[] = "ABC";
	getPermutations(s, 0);
	                                                                                                                                                                   

	return 0;
}