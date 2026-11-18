#include <iostream>
using namespace std;

int main() {
    int n = 407;
    int d1 = n % 10;         
    int d2 = (n / 10) % 10;  
    int d3 = n / 100;       

    int rev = (d1 * 100) + (d2 * 10) + d3;
    cout << rev;
    return 0;
}
