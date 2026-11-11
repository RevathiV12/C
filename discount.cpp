#include <iostream>
using namespace std;

int main() {
    int bill = 2400;
    int pay;
    if (bill >= 2000) {
        int discount = (bill * 15) / 100; 
        pay = bill - discount;            
    } 
    else {
        pay = bill;                       
    }
    cout << "Amount to pay: " << pay << " rupees" << endl;
    return 0;
}
