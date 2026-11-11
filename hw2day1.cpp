#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "enter number: ";
    cin >> N;
    
    if (N < 3) {
        cout << "No multiples of 3 found" << endl;
    } 
    else {
        for (int i = 1; i <= N; i++) {
            if (i % 3 == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
