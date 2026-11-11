#include <iostream>
using namespace std;

int main() {
    int age = 10;
    bool hasCard = true;
    bool can_borrow = (age >= 12) && hasCard;
    cout << "Condition value (1=True, 0=False): " << can_borrow << endl;
    cout << "Latha can borrow books: " << (can_borrow ? "Yes" : "No") << endl;
    return 0;
}
