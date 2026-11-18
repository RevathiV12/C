#include <iostream>
using namespace std;

int main() {
    int totalDays = 1200;
    int years = totalDays / 365;
    int rem = totalDays % 365;
    int months = rem / 30;
    int days = rem % 30;
    cout << years << " years " << months << " months " << days << " days";
    return 0;
}
