#include <iostream>
using namespace std;

int main() {
    int bill = 2400;
    int pay = bill >= 2000 ? bill - bill * 15 / 100 : bill;
    cout << "Pay: " << pay << endl;
    return 0;
}
