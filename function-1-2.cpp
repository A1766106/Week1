#include <iostream>

double array_mean(int array[], int n)
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
    numbers = numbers += ;
    }
    average = average/numbers ;
  
    return average;

}
