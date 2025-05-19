#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    // Ask user to input the number of rows
    cin >> N;

    // Outer loop for the number of rows (from N to 1)
    for (int i = N; i >= 1; --i) {
        // Inner loop to print stars in each row
        for (int j = 1; j <= i; ++j) {
            cout << '*';
        }
        // Move to the next line after each row
        cout << '\n';
    }

    return 0;
}
