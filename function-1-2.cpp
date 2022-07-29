double array_mean(int array[], int n)
{
	int total = 0 ;

    if (n < 1)
    {
        return total;
    }

    for (int i = 0; i < n; i++)
    {
    total = total + array[i];
    }
    double average = 1.0 * total / n ;
  
    return average;

}
