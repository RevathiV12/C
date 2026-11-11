#include <iostream>
using namespace std;

int main() {
    int total_books = 250;
    int issued_books = 63;
    int books_on_shelf = total_books - issued_books;
    cout << "Books still on the shelf: " << books_on_shelf << endl;
    return 0;
}
