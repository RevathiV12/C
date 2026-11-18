#include <iostream>
using namespace std;

int main() {
    int length = 48;
    int width = 18;
    int tile = 1; 
    for (int i = 1; i <= width; i++) {
        if (length % i == 0 && width % i == 0) {
            tile = i; 
        }
    }
    cout << "Largestsquaretilesidelength: " << tile << " units" << endl;
    return 0;
}
