#include <iostream> 
using namespace std; 
 
int main() { 
    int n = 12; 
    int count = 0; 
    for (int card = 2; card <= n; ++card) { 
        int divisors = 0; 
        for (int d = 1; d <= card; ++d) { 
            if (card % d == 0) ++divisors; 
        } 
        if (divisors == 2) { 
            cout << card << "\n"; 
            ++count; 
        } 
    } 
    cout << "Prime cards = " << count << "\n"; 
    return 0; 
} 