#include <iostream>
using namespace std;

int main(){
    int array[] = {1,2,0,2,1};
    int n = 5;
    int case1;
extern bool is_fanarray(int array[], int n);
case1= is_fanarray(array, n);

if (case1==1)
cout << "True" << is_fanarray(array, n) << endl;

if (case1==0)
cout << "False" << is_fanarray(array, n) << endl;
return 0;
}