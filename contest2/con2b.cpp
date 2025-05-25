#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Input the size of the square (odd number)

    // Loop through each row
    for (int i = 0; i < N; i++) {
        // Loop through each column in the current row
        for (int j = 0; j < N; j++) {
            // Conditions to print slashes, backslashes, asterisks, or X
            if (i == j) {
                cout << "\\";
            } else if (i + j == N - 1) {
                cout << "/";
            } else if (i == N / 2 || j == N / 2) {
                cout << "*";
            } else if (i == N / 2 && j == N / 2) {
                cout << "X";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
