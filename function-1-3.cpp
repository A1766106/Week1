#include <iostream>

int num_count(int array[], int n, int num)
{

    int number_Count = 0 ;

        if (n < 1)
    {
        return number_Count;
    }

    for (int i = 0; i < n; i++)
    {
    if (array[i] == num)
            number_Count = number_Count + 1 ;
    }

    return number_Count ; 

}