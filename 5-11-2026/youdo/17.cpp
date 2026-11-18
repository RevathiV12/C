#include <iostream>
using namespace std;

int main() {
    int order = 350;
    bool isMember = true;
    bool freeDelivery = (order > 500 || isMember);
    cout << freeDelivery << endl; 
    return 0;
}
