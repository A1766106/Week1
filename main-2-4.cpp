#include <iostream>
#include <stdlib.h>

using namespace std;

extern bool is_ascending(int*,int);

int main(int argc,char **argv)
{

int array [5] = {4,5,6,7,8};
std::cout << "If ascending 1 if not ascending 0: " << is_ascending(array, 5) << endl ; 

return 0 ;
}
