#include <iostream>
using namespace std;
extern void base10to2(int base10);
int main()
{
int base10;

cout << "\nEnter number in base 10 : "; 
cin >> base10;
base10to2(base10);
return 0; 

}

