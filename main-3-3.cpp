#include<iostream>
using namespace std;

int main()
{
   int array[] = {1,2,1,4,1,3};
   int n= 6;
   extern double weighted_average(int array[], int n);
   cout<<"Weighted sum is = "<<weighted_average(array, n)<<endl;
       return 0;
}