
double sum_even(double array[], int n)
{
	double total = 0;
    if (n < 1)
    {
        return;
    }
    else
    {
        for (int i = 0; i < n; i = i + 2)
        {
            total = total + array[i];
        }
    }
    return total;
}