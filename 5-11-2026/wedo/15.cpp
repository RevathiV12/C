#include <iostream>
using namespace std;

int main() {
    int age = 17;
    bool hasLicence = true;
    bool canRent = (age >= 18 && hasLicence);
    cout << canRent; 
    return 0;
}
