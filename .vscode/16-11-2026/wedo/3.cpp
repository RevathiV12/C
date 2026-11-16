#include <iostream>
using namespace std;
int addScores(int first, int second) {
    int total = first + second;
    return total;
}
int main() {
    int s1, s2;
    cin >> s1 >> s2;
    int result = addScores(s1, s2);
    cout << result;
    return 0;
}
