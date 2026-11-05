#include <iostream>
using namespace std;
int main()
 {
    int code = 4827;
    int thousands = code / 1000;       
    int hundreds = (code / 100) % 10;  
    int tens = (code / 10) % 10;       
    int ones = code % 10;              
    int sum = thousands + hundreds + tens + ones;
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}