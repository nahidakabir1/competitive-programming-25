#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Step 1: Count the number of ones in the binary representation of N
        int count = 0;
        int temp = N;
        while (temp) {
            count++;
            temp &= (temp - 1); // Removes the rightmost set bit
        }

        // Step 2: Create a new number with 'count' ones at the least significant bits
        int result = (1 << count) - 1;

        // Step 3: Output the result
        cout << result << endl;
    }

    return 0;
}
