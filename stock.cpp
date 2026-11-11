#include <iostream>
using namespace std;

int main() {
    int stock = 36;
    int sold = stock-- - 4; 
    int left = --stock + sold; 
    cout << "Final value of stock: " << stock << endl;
    cout << "Final value of sold: " << sold << endl;
    cout << "Final value of left: " << left << endl;
    return 0;
}
