#include <iostream>
using namespace std;

int main() {
    int cells, target;
    cin >> cells >> target;
    int hours = 0;
    while (cells <= target) {
        cells = cells * 2;
        hours++;
    }
    cout << "Hours = " << hours << endl;
    cout << "Cells = " << cells << endl;
    return 0;
}
