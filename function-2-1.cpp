#include <iostream>
using namespace std;

int min_element(int array[], int n){
int smallest= array[0];
    
   for (int i = 0; i<n ; i++) {
   if(smallest>array[i])
  smallest=array[i];
   
  if (n<1)
  return 0;
   }
   return smallest;
    
   }
   

   
