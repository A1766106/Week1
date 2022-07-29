#include <iostream>

int max_element(int array[], int n)
{
	int highestNumber = 0;

    if ( n < 1)
    {
        return highestNumber;
    }
    else
    {
        highestNumber = array[1] ;
    }

    for (int i = 0; i < n; i++)
    {
    if (array[i] > highestNumber)
        highestNumber = array[i];
    }

    return highestNumber;

}

