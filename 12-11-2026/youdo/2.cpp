#include <iostream>
using namespace std;

int main() {
 int scores[5] = {55, 72, 68, 91, 83};
    int idx = 2;

    if (idx >= 0 && idx < 5) {
        scores[idx] = 76;
        for (int i = 0; i < 5; i++) {
            cout << scores[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid index" << endl;
    }
    int scores2[5] = {55, 72, 68, 91, 83};
    idx = 5;
    if (idx >= 0 && idx < 5) {
        scores2[idx] = 60;
        for (int i = 0; i < 5; i++) {
            cout << scores2[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid index" << endl;
    }
    return 0;
}
