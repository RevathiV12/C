#include <iostream>
using namespace std;
int main() {
    int counter = 20;
    counter++;      // One more customer served
    counter += 2;   // Two customers served together
    counter--;      // One ticket cancelled
    cout << "Final counter value: " << counter;
    return 0;
}
