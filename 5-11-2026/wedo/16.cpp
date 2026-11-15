#include <iostream>
using namespace std;

int main() {
    int marks = 88;
    int attendance = 72;
    bool getsScholarship = (marks > 85 || attendance > 90);
    cout << getsScholarship; 
    return 0;
}
