#include<iostream>
using namespace std;

double weighted_average(int array[], int n){
   double total = 0;
   int increment;
   for(int i = 0;i<n;i++){
      increment = 0;
      for(int j = 0;j<n;j++){
         if(array[i] == array[j]){
            increment++;
         }
      }
      total= total+ ((1.0*array[i]*increment)/n);
      if (n<1)
  return 0;
   }
   return total;
}