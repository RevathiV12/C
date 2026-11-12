#include <iostream>
using namespace std;
int main() {
    int ids[6] = {21, 35, 21, 44, 21, 50};
    int target1 = 21;
    int count1 = 0;
    cout << "Indices: ";
    for (int i = 0; i < 6; i++) {
        if (ids[i] == target1) {
            cout << i << " ";   
            count1++;           
        }
    }
    if (count1 == 0) {
        cout << "Not found" << endl;
    } else {
        cout << endl << "Count: " << count1 << endl;
    }
    int target2 = 99;
    int count2 = 0;
    for (int i = 0; i < 6; i++) {
        if (ids[i] == target2) {
            cout << i << " ";
            count2++;
        }
    }
    if (count2 == 0) {
        cout << "Not found" << endl;
    } else {
        cout << endl << "Count: " << count2 << endl;
    }
    return 0;
}
