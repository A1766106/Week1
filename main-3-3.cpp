#include <iostream>
#include <stdlib.h>

using namespace std;

extern double weightedaverage(int*,int);

int main(int argc,char **argv)
{
	int array [6] = {1,2,1,4,1,3};
	std::cout << "The weighted average is " << weightedaverage(array, 6) << std::endl;
	return 0 ;
}