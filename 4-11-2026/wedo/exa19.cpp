#include <iostream>
using namespace std;
int main() {
    int token = 253;
    int d1 = token / 100;
    int d2 = (token / 10) % 10;
    int d3 = token % 10;
    int reversed = (d3 * 100) + (d2 * 10) + d1;
    cout << "Reversed token number: " << reversed;
    return 0;
}
