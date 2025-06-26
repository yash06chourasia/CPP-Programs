#include <iostream>
using namespace std;
int main() {
    unsigned int decimal;
    int index = 0;
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char ans[100];
    cout << "Enter a decimal number: ";
    cin >> decimal;
    if (decimal == 0) {
        cout << "Hexadecimal: 0";
        return 0 ;
    }
    while (decimal > 0) {
        int remainder = decimal % 16; 
        ans[index] = hexDigits[remainder];
        index++;
        decimal /= 16;  
    }
    cout << "Hexadecimal: ";
    for (int i = index - 1; i >= 0; i--) { 
        cout << ans[i];
    }
    return 0;
}



