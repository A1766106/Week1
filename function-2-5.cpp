#include <iostream>

using namespace std; 

bool descending(int array[], int n)
{
  int counter = 0 ;
 
 int previousNumber = array[0];
 
 for (int i = 0; i < n; i++)
 {
   if (previousNumber >= array[i])
   {
    previousNumber = array[i];
    counter++ ;
   }
 }
  if (n == counter)
  {
  return true;
  }
  
  else 
  {
  return false;
  }

}
   
