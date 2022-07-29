#include <iostream>
#include <stdlib.h>

extern int sum_array(int array[], int n);
int main(int argc,char **argv)
{
    int array [5] = {4,5,6,7,9};
    std::cout << "The sum of the array is: " << sum_array(array, 5) << std::endl ;

return 0 ;
}
