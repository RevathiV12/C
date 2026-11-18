#include <iostream>
using namespace std;

int main() {
    int totalSeconds = 5000;
    int hours = totalSeconds / 3600;
    int remaining = totalSeconds % 3600;
    int minutes = remaining / 60;
    int seconds = remaining % 60;
    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}
