#include <iostream>
#include <stdlib.h>

using namespace std; 

extern void two_five_nine(int*,int);

int main(int argc,char **argv)
{
int array [] = {4,5,6,7,8} ;
two_five_nine(array, 5) ;
return 0 ;
}
