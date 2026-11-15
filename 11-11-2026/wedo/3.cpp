#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 6, border = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                cout << "#";
                border++;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << "Border positions = " << border;
    return 0;
}
