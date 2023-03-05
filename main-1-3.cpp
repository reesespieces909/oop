#include <iostream>
using namespace std;


int main() {
 int array[]= {2,4,4,4};
int number=0;
int n=4;

extern int num_count(int array[], int n, int number);


 cout << "The amount of equal elements in the array are =  " << num_count (array,n, number)<< endl;
    return 0;
}
