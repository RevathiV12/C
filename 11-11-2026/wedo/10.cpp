#include <iostream> 
using namespace std; 
 
int main() { 
    int first = 48, second = 18; 
    while (second != 0) { 
        int remainder = first % second; 
        first = second; 
        second = remainder; 
    } 
    cout << "Tile side = " << first << '\n'; 
    return 0; 
} 