
#include <iostream>

int sum_array(int array[], int n)
{

    int sumOfArray = 0;

    for (int i = 0; i < n; i++)
    {
    sumOfArray = sumOfArray + array[i];

    }
  
    return sumOfArray;
}