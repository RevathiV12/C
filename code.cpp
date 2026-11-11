#include <iostream>
using namespace std;

int main() {
    int code = 7351;
    int d4 = code % 10;          
    int d3 = (code / 10) % 10;   
    int d2 = (code / 100) % 10;  
    int d1 = code / 1000;      
    int sum = d1 + d2 + d3 + d4;
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
