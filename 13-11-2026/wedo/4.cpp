#include <iostream>
using namespace std;

int main() {
    int num[5] = {70, 0, 90, 60, 80};
    for (int i = 0; i < 5; i++) {
        if (num[i] == 0 || num[i] == 80) {
            cout << "Value " << num[i] << " is at index: " << i << endl;
        }
    }

    return 0;
}















