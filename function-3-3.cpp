
#include <iostream>

double weighted_average(int array[], int n)
{

    if (n < 1)
    {
    return 0;
    }
    double average = 0 ;
    for (int i = 0; i < n; i++)
    {
        int count = 0 ;
        for (int a = 0; a < count; a++)
        {
            if (array[i] == array [a]) 
            {
                count = count + 1;
            }
        }

    }
return average ;
}   
