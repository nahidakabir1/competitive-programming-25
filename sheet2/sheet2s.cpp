#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        // Determine the lower and upper bounds
        int lower = (X < Y) ? X + 1 : Y + 1;
        int upper = (X > Y) ? X - 1 : Y - 1;

        // If the range is invalid (no numbers between X and Y)
        if (lower > upper) {
            cout << 0 << endl;
            continue;
        }

        // Adjust lower to the next odd number if it's even
        if (lower % 2 == 0) {
            lower++;
        }

        // Calculate the sum of odd numbers in the range
        int sum = 0;
        for (int i = lower; i <= upper; i += 2) {
            sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}

