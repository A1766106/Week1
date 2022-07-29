#include <iostream>
#include <stdlib.h>

using namespace std; 

extern int max_element(int*,int);

int main(int argc,char **argv)
{
    int array [5] = {4,5,6,7,8};
    std::cout << "The highest number is: " << max_element(array, 5) << endl ;
return 0 ;
}
