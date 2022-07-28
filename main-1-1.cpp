
#include <iostream>
#include <stdlib.h>

using namespace std;

extern int sum_array(int*, int);
int main()
{
    int array [5] = {4,5,6,7,8};
    std::cout << "The sum of the array is: " << sum_array(array, 5) << endl ;

return 0 ;
}
