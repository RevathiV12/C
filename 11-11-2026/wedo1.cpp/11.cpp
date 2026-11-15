#include <iostream>
using namespace std;

int main() {
    int rows;
    cin >> rows;
    int sum = 0;
    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= r; c++) {
            cout << c << " ";
            sum = sum + c;
        }
        cout << endl;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
