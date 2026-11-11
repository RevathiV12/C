#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    if (a == b) {
        cout << "Both numbers are equal" << endl;
    } 
    else if (a < b) {
        cout << "Smallest = " << a << endl;
    } 
    else {
        cout << "Smallest = " << b << endl;
    }
    
    return 0;
}
