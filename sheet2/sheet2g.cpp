#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N;

        long long fact = 1;
        for (int i = 2; i <= N; ++i) {
            fact *= i;
        }

        cout << fact << endl;
    }

    return 0;
}

