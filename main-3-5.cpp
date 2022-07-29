#include <iostream>
#include <stdlib.h>

using namespace std;

extern double sum_even(double array[], int n);

int main()
{
	double array [5] = {4,5,6,7,8};
    std::cout << "The sum of even elements are: " << sum_even(array, 5) << endl ;
	return 0 ;
}