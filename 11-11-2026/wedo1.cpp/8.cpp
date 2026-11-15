#include <iostream>
using namespace std;

int main() {
    int locker;
    cin >> locker;
    int copy = locker;
    int rev = 0;
    do {
        int digit = copy % 10;
        rev = rev * 10 + digit;
        copy = copy / 10;
    } while (copy > 0);
    cout << "Reverse = " << rev << endl;
    if (rev == locker) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }
    return 0;
}
