#include <iostream>
using namespace std;
int main() {
    int ids[6] = {41, 72, 15, 72, 60, 72};
    int target;
    cout << "Enter target ID: ";
    cin >> target;
    int matchingIndices[6];
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (ids[i] == target) {
            matchingIndices[count] = i;
            count++;
        }
    }
    if (count == 0) {
        cout << "No matches. Count: 0" << endl;
    } else {
        cout << "Indices: ";
        for (int i = 0; i < count; i++) {
            cout << matchingIndices[i];
            if (i < count - 1) {
                cout << " ";
            }
        }
        cout << ". Count: " << count << endl;
    }
    return 0;
}


    