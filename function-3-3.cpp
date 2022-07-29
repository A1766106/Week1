#include <iostream>

double weightedaverage(int array[], int n)
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
                count++;
            }
        }
        double num = array[i] * count ;
        average += static_cast<double>(num /n);
    }

    return average; 
}
