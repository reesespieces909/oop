#include <iostream>
using namespace std;

int main(){
    int array[] = {18,11,29,21};
    int n = 4;
extern int max_element(int array[], int n);
cout << "Biggest number is: " << max_element(array, n) << endl;
return 0;
}