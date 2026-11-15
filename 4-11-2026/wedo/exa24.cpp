#include <iostream>
using namespace std;
int main() {
    int totalDays = 900;
    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int months = remainingDays / 30;
    int days = remainingDays % 30;
    cout << years << " years, " << months << " months and " << days << " days";
    return 0;
}
