#include <iostream>

using namespace std;

int median(int array[],int n){




   int n(array, array+n);
   if (n % 2 != 0)
      return (int)array[n/2];
   return int(array[(n-1)/2] + array[n/2])/2.0;
}  