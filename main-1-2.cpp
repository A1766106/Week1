#include <iostream>
#include <stdlib.h>

using namespace std; 

extern double array_mean(int*,int);

int main(int argc,char **argv)
{
    int array [5] = {4,5,6,7,8};
    std::cout << "The average of the array is: " << array_mean(array, 5) << endl ; 

return 0 ;
}
