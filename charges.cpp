#include <iostream>
using namespace std;

int main() {
    int visit_fee = 150;
    int hourly_rate = 60;
    int hours = 4;
    int total_bill = visit_fee + (hourly_rate * hours);
    cout << "Total job value: " << total_bill << " rupees" << endl;
    return 0;
}
