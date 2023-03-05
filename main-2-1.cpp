#include <iostream>
using namespace std;

int main(){
    int array[] = {18,11,16,21};
    int n = 4;
extern int min_element(int array[], int n);
cout << "Smallest number is: " << min_element(array, n) << endl;
return 0;
}