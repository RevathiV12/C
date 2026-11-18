#include <iostream>
using namespace std;

int main() {
    int ids[5] = {10, 45, 72, 88, 91}; 
    bool found = false;

    for (int indexofarray = 0; indexofarray < 5; indexofarray++) {
        if (ids[indexofarray] == 72) {
            cout << "Found at index: " << indexofarray << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "not found" << endl;
    }

    return 0;
}
