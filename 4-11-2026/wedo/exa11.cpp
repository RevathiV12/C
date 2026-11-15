#include <iostream>
using namespace std;
int main() {
    int fixedCharge = 50, ratePerKm = 12, distance = 15;
    int totalFare = fixedCharge + (ratePerKm * distance);
    cout << "Total fare: " << totalFare << " rupees";
    return 0;
}
