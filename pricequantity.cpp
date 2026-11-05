#include <iostream>
using namespace std;
int main() {
    int price, quantity;
    cout << "Enter price: ";
    cin >> price; 
    cout << "Enter quantity: ";
    cin >> quantity; 
    int total = price * quantity;
    cout << "Total = " << total << endl;
    return 0;
}