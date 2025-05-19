#include <iostream>
using namespace std;

int main() {
    int N, M;

    // Repeat reading until a number is less than or equal to zero
    while (cin >> N >> M) {


        // If either number is zero or negative, stop the program
        if (N <= 0 || M <= 0) {
            break;
        }

        // Determine which number is smaller and which is larger
        int small, large;
        if (N < M) {
            small = N;
            large = M;
        } else {
            small= M;
            large = N;
        }

        int sum = 0;

        // Print numbers between start and end, and calculate sum
        for (int i = small; i <= large; i++) {
            cout << i << " ";
            sum += i;
        }

        // Print the sum at the end
        cout << "sum =" << sum << endl;
    }

    return 0;
}
