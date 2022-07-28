#include <iostream>

double average(int array[], int n)
{
	int average = 0 ;
    int numbers = 0 ;

    if (n < 1)
    {
        return average;
    }

    for (int i = 0; i < n; i++)
    {
    average = average + array[i];
    numbers = numbers + 1 ;
    }
    average = average/numbers ;
  
    return average;

}
