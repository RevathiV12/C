#include <iostream>
using namespace std;
int main() {
    double salary = 50000.50;
    char grade = 'A';
    bool flag = true;
    int total_memory = sizeof(salary) + sizeof(grade) + sizeof(flag);
    cout << "Total memory: " << total_memory << " bytes" << endl;
    return 0;
}
