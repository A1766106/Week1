#include <iostream>

using namespace std;

extern int median_array(int*,int);

int main(int argc,char **argv)
{
int array [4] = {2, 5, 1, 4};
int answ = median_array(array, 4) ;
std::cout << answ << endl ;
	return 0 ;
}