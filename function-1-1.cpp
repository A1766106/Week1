int sum_array(int array[], int n)
{

    int sumOfArray = 0;

        if (n < 1)
    {
        return sumOfArray;
    }

    for (int i = 0; i < n; i++)
    {
    sumOfArray = sumOfArray + array[i];

    }
  
    return sumOfArray;
}