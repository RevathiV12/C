#include <iostream>
using namespace std;
int main() {
    int totalSeconds = 7384;
    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;
    cout << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";
    return 0;
}
