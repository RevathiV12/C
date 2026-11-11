#include <iostream>
using namespace std;

int main() {
    int C = 36;
    double res_a = C * 9 / 5 + 32;
    double res_b = C * 9.0 / 5 + 32;
    cout << "Result (a) with int values: " << res_a << endl;
    cout << "Result (b) with 9.0: " << res_b << endl;
    return 0;
}
