#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4]){



int diagTotal=0;
int i;

for ( i= 0; i<4; ++i)

diagTotal = diagTotal + array[i][i];

return diagTotal;

}
