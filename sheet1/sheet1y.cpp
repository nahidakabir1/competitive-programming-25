
#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result = A;
    result = (result * B) % 100;
    result = (result * C) % 100;
    result = (result * D) % 100;

    // Print with leading zero if needed (e.g., 09 instead of 9)
    if (result < 10)
        cout << "0" << result << endl;
    else
        cout << result << endl;

    return 0;
}
