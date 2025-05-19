#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int n;
        cin >> n;

        if (n == 0) {
            cout << "0\n";
            continue;
        }

        while (n != 0) {
            int rem = n % 10;
            cout << rem;
            n /= 10;
            if (n != 0) {
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
