#include <iostream>
using namespace std;

int main() {
    int totalBooks = 250;
    int issuedBooks = 63;
    int booksLeft = totalBooks - issuedBooks;
    cout << "Books on shelf: " << booksLeft << endl;
    return 0;
}
