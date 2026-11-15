#include <iostream>
using namespace std;
int main() {
    int rate = 15, time = 8, leak = 20;
    int waterLeft = (rate * time) - leak;
    cout << "Water in the tank: " << waterLeft << " litres";
    return 0;
}
