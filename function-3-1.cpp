#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n){

    bool a= true;
    bool b = true;
   for ( int i = 0; i<n/2  ; i++) {
   if(array[i+1]<array[i]){
  a = false;
   }
   }

  for ( int i = n/2; i<n -1 ; i++) {
   if(array[i+1]>array[i]){
  b= false;
   }
  }
  if (a==false && b==false){
    return false;
   }
   
   return true;
    
}
