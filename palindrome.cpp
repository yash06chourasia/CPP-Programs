#include <iostream>
using namespace std;

int main() {
    int n, temp, rev = 0, rem;
    cout << " Enter The Number: ";
    cin >> n;
    
    temp = n; 
    
    while (n > 0) {
        rem = n % 10;       
        rev = rev * 10 + rem; 
        n = n / 10;        
    }
    if (temp == rev) {
        cout << temp << " is a Palindrome Number";
    } else {
        cout << temp << " is not a Palindrome Number";
    }

    return 0;
}
