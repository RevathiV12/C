#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, orig;
    cout << "enter number: ";
    cin >> n;
    
    orig = n;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    
    if (orig == rev) 
        cout << "Palindrome" << endl;
    else 
        cout << "Not a Palindrome" << endl;
        
    return 0;
}
