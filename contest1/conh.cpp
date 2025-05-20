#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    // Calculate n * k
    long long product = n * k;

    // Check if the product fits within the range of a 64-bit signed integer
    if (product > 9223372036854775807LL) {
        cout << "double" << endl;
    } else {
        // Calculate n * k / a
        long long result = product / a;
        if (result > 2147483647 || result < -2147483648) {
            cout << "long long" << endl;
        } else {
            cout << "int" << endl;
        }
    }

    return 0;
}
