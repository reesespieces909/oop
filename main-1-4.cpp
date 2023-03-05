#include <iostream>
using namespace std;


int main() {
 int array[]= {10,10,10,10};
 int secondarray[]= {1,1,1,1};
int n=4;

extern int sum_two_arrays(int array[], int secondarray[], int n);


 cout << "Sum of arrays are =  " << sum_two_arrays(array, secondarray, n)<< endl;
    return 0;
}