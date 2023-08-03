#include <iostream>
#include <cstring>
using namespace std;

void print_binary_str(std::string decimal_number) {
        int num = stoi(decimal_number);

        string s = "";
        while(num != 0) {
                s = (char)('0' + (num%2)) + s;
                num = num / 2;
        
        return ;
        }  
}