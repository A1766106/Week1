#include <iostream>
#include <stdlib.h>

using namespace std;

extern int count_even(int number);

int main(int argc,char **argv)
{
	
    std::cout << "The number of evens are: " << count_even(5) << endl ;

return 0 ;
}
