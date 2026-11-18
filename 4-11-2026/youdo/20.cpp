#include <iostream>
using namespace std;

int main() {
    int sec = 5000;
    int hours = sec / 3600;
    int rem = sec % 3600;
    int minutes = rem / 60;
    int seconds = rem % 60;
    cout << hours << " hours " << minutes << " minutes " << seconds << " seconds";
    return 0;
}
