#include <iostream>
using namespace std;
int payableAmount(int bill);
int main() {
    int billAmount;
    cin >> billAmount;
    cout << payableAmount(billAmount) << endl;   
    return 0;
}
int payableAmount(int bill) {
    if (bill >= 500) {
        int discount = 50;        
        bill = bill - discount;   
    } 

    return bill;
}
