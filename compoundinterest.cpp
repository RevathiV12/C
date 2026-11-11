#include <iostream>
#include <cmath> // Required to use the pow() function
using namespace std;

int main() {
    double P, R, T;
    cout << "enter principal: ";
    cin >> P;
    cout << "enter rate: ";
    cin >> R;
    cout << "enter time: ";
    cin >> T;
    double amount = P * pow((1 + R / 100), T);
    double ci = amount - P;
    
    cout << "Compound Interest = " << ci << endl;
    
    return 0;
}
