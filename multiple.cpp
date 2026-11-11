#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter number: ";
    cin >> num;
    if (num % 5 == 0) {
        cout << "Multiple of 5" << endl;
    } else {
        cout << "Not a multiple of 5" << endl;
    }
    
    return 0;
}
