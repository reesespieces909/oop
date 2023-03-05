#include <iostream>
using namespace std;

int main(){
   


   int array[] = {3,5,2,1,7};
   int n = sizeof(array)/sizeof(array[0]);
   extern int median(int array[],int n);
   cout << "Median is : " << median(array, n) << endl;
   return 0;
}