#include <iostream>
using namespace std;
int addBonus(int score);
int main() {
    int originalScore;
    cin >> originalScore;
    int previewScore = addBonus(originalScore);
    cout << originalScore << " " << previewScore << endl;    
    return 0;
}
int addBonus(int score) {
    score = score + 5; 
    return score;      
}
