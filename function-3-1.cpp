#include <iostream>

using namespace std;

bool is_fanarray(int array[], int n)
{

    if (n < 1)
    {
        return false;
    }
	for (int i = 0; i < n/2; i++)
    {
        if(array[i+1] < array[i] || array[i] != array[n-i-1])
        {
            return false ;
        }
    }
    for (int i = n/2 ; i<n-1; i++)
    {
        if(array[i+1]>array[i])
        {
            return false ;
        }
    }
    return true;

}