#include <iostream>
using namespace std;


int main() {
 double array[]= {2,2,2,2};

int n=4;

extern double sum_even(double array[], int n);


 cout << "sum=  " << sum_even(array,n)<< endl;
    return 0;
}