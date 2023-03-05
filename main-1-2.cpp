#include <iostream>
using namespace std;


int main() {
 int array[]= {2,4,6,13};

int n=4;

extern double array_mean(int array[], int n);


 cout << "Average is=  " << array_mean (array,n)<< endl;
    return 0;
}
