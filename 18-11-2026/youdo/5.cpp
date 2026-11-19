#include <iostream>
using namespace std;

int main() {
    int durations[5];
    int target;
    for (int i = 0; i < 5; i++) {
        cin >> durations[i];
    }
    cin >> target;
    int *ptr = durations;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (*ptr >= target) {
            count++;
        }
        ptr++; 
    }
    cout << count << endl;
    
    return 0;
}
