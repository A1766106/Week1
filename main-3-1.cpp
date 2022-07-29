#include <iostream>
#include <stdlib.h>

using namespace std;

extern bool fanarray(int*,int);

int main(int argc,char **argv)
{
int array [5] = {1,2,3,2,1};
std::cout << "If palindrome 1 if not palindrome 0: " << fanarray(array, 5) << endl ; 
return 0 ;
}