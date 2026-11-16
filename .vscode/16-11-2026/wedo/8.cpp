#include <iostream>
using namespace std;
int greatestScore(int a, int b, int c) {
    int greatest = a;
    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }
    return greatest;
}
int main() {
    int score1, score2, score3;
    cout << "Enter three scores: ";
    cin >> score1 >> score2 >> score3;
    int result = greatestScore(score1, score2, score3);
    cout << "Greatest score: " << result << endl;
    return 0;
}
