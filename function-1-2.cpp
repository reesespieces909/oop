#include <iostream>
using namespace std;
double array_mean(int array[], int n){

    
    double total=0;
   for (int i = 0; i<n ; i++) {
    total=(total+array[i]);
    
  if (n<1)
  return 0;
 }
    return total/n;
   
}