
#include <bits/stdc++.h>
using namespace std;N

int main() {
    double N;
    cin >> N;

    int intPart = (int)N;
    double decPart = N - intPart;

    if (decPart == 0.0) {
        cout << "int " << intPart << endl;
    } else {
        cout << "float " << intPart << " " << decPart << endl;
    }

    return 0;
}
