
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;


    string digits;
    cin >> digits;

    long long sum = 0;
    for (int i = 0; i < N; i++) {

        sum += digits[i] - '0';
    }

    cout << sum << "\n";
    return 0;
}
