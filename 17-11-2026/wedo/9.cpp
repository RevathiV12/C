#include <iostream>
using namespace std;
void showAmounts(int amount);
int main() {
    int cupsSold;
    cin >> cupsSold;
    showAmounts(cupsSold);   
    return 0;
}
void showAmounts(int amount) {
    if (amount > 0) {
        int amount = 2; 
        cout << amount << endl; 
    } 
    cout << amount << endl;
}
