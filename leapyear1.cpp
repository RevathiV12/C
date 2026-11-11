#include <iostream>
using namespace std;

int main() {
    int year = 1900;
    bool is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    cout << "Is 1900 a leap year? (1=Yes, 0=No): " << is_leap << endl; 
    return 0;
}
