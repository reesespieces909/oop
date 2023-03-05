#include <iostream>
using namespace std;


int main() {
 int array[]= {1,2,3,4};

int n=4;

extern int array_sum(int array[], int n);


 cout << "sum=  " << array_sum (array,n)<< endl;
    return 0;
}