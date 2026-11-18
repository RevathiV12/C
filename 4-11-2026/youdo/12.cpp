#include <iostream>
using namespace std;

int main() {
    int pens = 500, boxSize = 12;
    cout << "Full boxes: " << pens / boxSize << endl;
    cout << "Left over: " << pens % boxSize;
    return 0;
}
