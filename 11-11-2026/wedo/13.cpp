#include <iostream> 
using namespace std; 
 
int main() { 
    int n = 11; 
    int cartons = 0; 
    while (n > 0) { 
        int packed = n < 4 ? n : 4; 
        n -= packed; 
        ++cartons; 
        cout << "Packed = " << packed << "\n"; 
    } 
    cout << "Cartons = " << cartons << "\n"; 
    return 0; 
} 