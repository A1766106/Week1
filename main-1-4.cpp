#include <iostream>
#include <stdlib.h>

using namespace std;

extern int sumtwo(int*,int*,int);

int main(int argc,char **argv)
{
	int array [5] = {4,5,6,7,8}, secondarray [5] = {4,5,6,7,8};
    std::cout << "The sum of the arrays is: " << sumtwo(array, secondarray, 5) << endl ;
	return 0 ;
}