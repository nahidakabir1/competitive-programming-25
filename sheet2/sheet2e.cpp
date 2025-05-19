#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;               // Read number of elements

    int maxNum = 0;         // Initialize max value

    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;           // Read each number
        if (x > maxNum) {
            maxNum = x;     // Update max if current number is greater
        }
    }

    cout << maxNum << endl; // Print the maximum number
    return 0;
}
