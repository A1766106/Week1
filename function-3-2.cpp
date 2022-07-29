#include <iostream>

double median(int array[], int n)
{

    double median = 0 ;
    int min = 0 ;
    int temp = 0 ;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1 ; j < n; j++)
        {
            if (array[j] < array[min])
            min = j ;
            temp = array[i] ;
            array[i] = array[min] ;
            array[min] = temp ;
            
        }
    }


for (int i = 0; i < n; i++)
{
    std::cout << array[i] << std::endl ; 

}
return 0 ;

}