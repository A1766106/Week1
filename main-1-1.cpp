#include <iostream>
#include <stdlib.h>

extern int array_sum(int array[], int n);
int main(int argc,char **argv)
{
    int array [5] = {4,5,6,7,9};
    std::cout << "The sum of the array is: " << array_sum(array, 5) << std::endl ;

return 0 ;
}
