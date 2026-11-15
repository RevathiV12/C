#include <iostream>
using namespace std;

int main() {
    int code = 4026;
    int sum = 0;
    do {
        sum = sum + (code % 10);
        code = code / 10;
    } while (code > 0);
    cout << "Digit sum = " << sum << endl;
    return 0;
}
