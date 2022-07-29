#include <iostream>

int count_evens(int number)
{
	int evenCount = 0;

    if (number < 1)
    {
        return 0;
    }

    for (int i = 0; i < number; i++)
    {
    if (i%2 == 0)
    {
        evenCount = evenCount + 1;
    }
    }
    return evenCount;

}

