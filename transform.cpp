#include <iostream>
using namespace std;


void base10to2(int base10)
{
int base2[99]; 
int i = 0;
while (base10 > 0) { 
base2[i++] = base10 % 2; 
base10 = base10/2; 
}
cout<< i<<endl;
int j;
cout << "\nYour number in base 2 is= ";
for(j = i-1; j >= 0; j--){ 
cout << base2[j];
}
cout << endl;
}

