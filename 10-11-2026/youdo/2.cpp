#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int lcm = a;
    while (lcm % b != 0) {
        lcm = lcm + a;
    }
    cout << "LCM = " << lcm;
    return 0;
}
