#include <iostream> 
using namespace std; 
 
int main() { 
    int rows = 4, total = 0; 
    for (int row = 1; row <= rows; ++row) { 
        for (int value = 1; value <= row; ++value) { 
            if (value > 1) cout << ' '; 
            cout << value; 
            total += value; 
        } 
        cout << '\n'; 
    } 
    cout << "Total = " << total << '\n'; 
    return 0; 
} 