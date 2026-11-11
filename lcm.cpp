#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int lcm;
    if (a > b) {
        lcm = a;
    } else {
        lcm = b;
    }
    while ((lcm % a != 0) || (lcm % b != 0)) {
        lcm = lcm + 1;
    }
    cout << "LCM = " << lcm << endl;
    return 0;
}
