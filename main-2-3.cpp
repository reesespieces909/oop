#include <iostream>
using namespace std;

int main(){
    int array[] = {2,5,5,5,9,9};
    int n = 6;
    extern void two_five_nine(int array[], int n);
    

void two_five_nine(int array[], int n);
int num_twos=0;
int num_fives=0;
int num_nines=0;
for (int i = 0; i<n ; i++) {
switch (array[i]){
    case 2:
    num_twos++;
    break;
    case 5:
    num_fives++;
    break;
    case 9:
    num_nines++;
    break;
}
}
cout << "2:" << num_twos << ";";
cout << "5:" << num_fives << ";";
cout << "9:" << num_nines << ";" << endl;

}



