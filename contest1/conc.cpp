#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    char next;

    if (c == 'z') {
        next = 'a';
    } else {
        next = c + 1;
    }

    cout << next << endl;

    return 0;
}
