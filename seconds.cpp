#include <iostream>
using namespace std;

int main() {
    int total_seconds = 5000;
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;
    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}
