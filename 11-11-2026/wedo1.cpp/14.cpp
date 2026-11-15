#include <iostream>
using namespace std;

int main() {
    int notebooks;
    cin >> notebooks;
    int cartons = 0;
    while (notebooks > 0) {
        if (notebooks >= 4) {
            cout << "Packed = 4" << endl;
            notebooks = notebooks - 4;
        } else {
            cout << "Packed = " << notebooks << endl;
            notebooks = 0;
        }
        cartons++;
    }
    cout << "Cartons = " << cartons << endl;
    return 0;
}
