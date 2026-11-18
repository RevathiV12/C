#include <iostream>
using namespace std;
int twice(int amount);
double twice(double amount);
int main() {
    int wholeAmount;
    double decimalAmount;
    cin >> wholeAmount >> decimalAmount;
    cout << twice(wholeAmount) << " " << twice(decimalAmount) << endl;   
    return 0;
}
int twice(int amount) {
    return amount * 2;
}
double twice(double amount) {
    return amount * 2;
}
