#include <iostream>

int count_even(int number)
{
	int evenCount = 0;

    if (number < 1)
    {
        return evenCount;
    }

    for (int i = 1; i < number; i++)
    {
    if (i%2 == 0)
    {
        evenCount = evenCount + 1;

    }
    }
    return evenCount;

}

