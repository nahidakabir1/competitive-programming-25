#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int num = 2; num <= n; num++) {
        int count = 0;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}

