#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int sum = 0;
    int maxVal = 0;
    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= cols; c++) {
            int val = r * c;
            cout << val << " ";
            sum = sum + val;
            if (val > maxVal) {
                maxVal = val;
            }
        }
        cout << endl;
    }
    cout << "Sum = " << sum << endl;
    cout << "Maximum = " << maxVal << endl;
    return 0;
}
