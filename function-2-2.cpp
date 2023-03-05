#include <iostream>
using namespace std;

int max_element(int array[], int n){
int biggest= array[0];
    
   for (int i = 0; i<n ; i++) {
   if(biggest<array[i])
  biggest=array[i];
   
  if (n<1)
  return 0;
   }
   return biggest;
    
   }
   
