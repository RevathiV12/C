#include <iostream> 
using namespace std; 
 
int main() { 
    int n = 6; 
    int count = 0; 
    for (int pass = 1; pass <= n; ++pass) { 
        cout << pass << "\n"; 
        ++count; 
    } 
    cout << "Passes stamped = " << count << "\n"; 
    return 0; 
} 