#include <iostream>
using namespace std;

int main() {
 int array[10][10]= {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 1, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0, 1, 0},{0, 0, 0, 0, 0, 0, 0, 0, 0, 1},};
extern int is_identity(int array[10][10]);

cout << "  " << is_identity (array)<< endl;
    return 0;
}

