#include <iostream>
using namespace std;

int main() {
    int fixed_charge = 30;
    int rate_per_km = 9;
    int distance = 18;
    int total_fare = fixed_charge + (rate_per_km * distance);
    cout << "Total auto fare: " << total_fare << " rupees" << endl;
    return 0;
}
