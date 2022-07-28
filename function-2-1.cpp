#include <iostream>

int minimum(int array[], int n)
{
	int lowestNumber = 0;

    if ( n < 1)
    {
        return lowestNumber;
    }
    else
    {
        lowestNumber = array[1] ;
    }

    for (int i = 0; i < n; i++)
    {
    if (array[i] < lowestNumber)
        lowestNumber = array[i];
    }

    return lowestNumber;

}

