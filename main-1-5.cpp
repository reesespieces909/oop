#include <iostream>
using namespace std;

int main (){
int number = 0;
 

extern int count_evens(int number);

cout << "Number of even numbers between 1 and n: " << count_evens(number) << endl;
return 0;
}