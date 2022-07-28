#include <iostream>
#include <stdlib.h>

using namespace std; 

extern int count(int*,int,int);

int main(int argc,char **argv)
{
	int array [5] = {4,5,6,7,8};
    std::cout << "The amount of times the number appears is: " << count(array, 5, 7) << endl ; 
	return 0 ;
}

