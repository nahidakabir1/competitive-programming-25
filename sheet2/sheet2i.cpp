#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int temp = N;
    int sum = 0;

    // Reverse the number manually
    while (temp != 0) {
        int rem = temp % 10;
        sum = (sum * 10) + rem;
        temp = temp / 10;
    }

    // Print reversed number (no leading zeros because it's an integer)
    cout << sum << endl;

    // Check if original and reversed numbers are the same
    if (N == sum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
