#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Top half of the diamond
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++)
            cout << " ";
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = N + 1; i <= 2 * N; i++) {
        // Print leading spaces
        for (int j = 1; j <= i - N; j++)
            cout << " ";
        // Print stars
        for (int j = 1; j <= 2 * (2 * N - i) - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
