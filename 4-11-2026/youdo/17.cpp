#include <iostream>
using namespace std;

int main() {
    int students = 1430, capacity = 50;
    cout << "Full buses: " << students / capacity << endl;
    cout << "Left over: " << students % capacity;
    return 0;
}
