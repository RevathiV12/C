#include <iostream>
using namespace std;
int main() {
    int totalMinutes = 135;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    cout << hours << " hours and " << minutes << " minutes";
    return 0;
}
