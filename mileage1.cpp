#include <iostream>
using namespace std;

int main() {
    int km = 95;
    int litres = 4;
    double mileage = (km * 1.0) / litres;
    double lost_mileage = km / litres; 
    cout << "Correct mileage: " << mileage << endl;      
    cout << "Wrong mileage: " << lost_mileage << endl;    
    cout << "Without the 1.0 factor, the .75 part is lost." << endl;
    return 0;
}
