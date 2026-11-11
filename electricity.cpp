#include <iostream>
using namespace std;

int main() {
    int units = 180;
    int bill = (100 * 3) + ((units - 100) * 5);
    cout << "Total electricity bill: " << bill << " rupees" << endl;
    return 0;
}
