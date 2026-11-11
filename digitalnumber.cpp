#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter number: ";
    cin >> num;
    if (num >= 100 && num <= 999 && num % 2 == 0) {
        cout << "Yes, it is a three-digit even number." << endl;
    } else {
        cout << "No, not an even three-digit number." << endl;
    }
    
    return 0;
}
