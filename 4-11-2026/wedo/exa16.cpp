#include <iostream>
using namespace std;
int main() {
    int adultPrice = 450, childPrice = 225;
    int adults = 3, children = 2;
    int totalFare = (adultPrice * adults) + (childPrice * children);
    cout << "Total fare: " << totalFare << " rupees";
    return 0;
}
