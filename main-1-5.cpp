#include <iostream>
#include <stdlib.h>

using namespace std;

extern int count_evens(int number);

int main(int argc,char **argv)
{
	
    std::cout << "The number of evens are: " << count_evens(5) << endl ;

return 0 ;
}
