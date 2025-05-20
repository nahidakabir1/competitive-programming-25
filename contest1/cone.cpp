#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Check if the absolute difference between a and b is at most 1
    if (a == b || abs(a - b) == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
