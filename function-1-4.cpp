
#include <iostream>

int sumtwo(int array[], int secondarray[], int n)
{
	int sumOfArrays = 0;

    for (int i = 0; i < n; i++)
    {
    sumOfArrays = sumOfArrays + array[i] + secondarray[i]; 
    }

    return sumOfArrays; 
}
