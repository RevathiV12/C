#include <iostream>
using namespace std;

int main() {
    int sheets;
    cin >> sheets;
    int total = 0;
    for (int pos = 1; pos <= sheets; pos++) {
        int label = pos * 4;
        cout << label << endl;
        total = total + label;
    }
    cout << "Total = " << total << endl;
    return 0;
}
