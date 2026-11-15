#include <iostream>
using namespace std;
int main() {
    int totalStudents = 1250, busCapacity = 45;
    int fullBuses = totalStudents / busCapacity;
    int studentsLeft = totalStudents % busCapacity;
    cout << "Full buses: " << fullBuses << endl;
    cout << "Students left without a seat: " << studentsLeft;
    return 0;
}
