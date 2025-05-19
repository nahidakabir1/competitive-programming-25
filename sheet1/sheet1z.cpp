#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    double power1 = B * log(A);
    double power2 = D * log(C);

    if (power1 > power2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
