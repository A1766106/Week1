#include <iostream>
#include <stdlib.h>

using namespace std;

extern int min_element(int*,int);

int main(int argc,char **argv)
{
    int array [5] = {4,5,6,7,8};
    std::cout << "The lowest number is: " << min_element(array, 5) << endl ;
return 0 ;
}
