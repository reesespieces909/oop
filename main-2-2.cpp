#include <iostream>

using namespace std;

int main(){
    int binary_digits;
    int number_of_digits;
int array[30] = {0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1}; 
extern int bin_to_int(int binary_digits[], int number_of_digits);
bin_to_int(array,30);
cout << "" << bin_to_int (number_of_digits) << endl;
return 0;
}