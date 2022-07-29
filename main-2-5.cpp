#include <iostream>
#include <stdlib.h>

using namespace std;

extern bool descending(int*,int);

int main(int argc,char **argv)
{
int array [5] = {8,7,6,5,4};
std::cout << "If descending 1 if not descending 0: " << descending(array, 5) << endl ; 

return 0 ;

}