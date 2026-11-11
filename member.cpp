#include <iostream>
using namespace std;

int main() {
    double order_amount = 350;
    bool is_member = true;
    bool free_delivery = (order_amount > 500) || is_member;
    cout << "Condition value (1=True, 0=False): " << free_delivery << endl;
    cout << "Mani gets free delivery: " << (free_delivery ? "Yes" : "No") << endl;
    return 0;
}
