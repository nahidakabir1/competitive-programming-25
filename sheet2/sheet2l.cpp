#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
int temp1=A;;
int temp2=B;
    while (temp2!= 0) {
        int rem = temp1%temp2;
        temp1=temp2;
        temp2=rem;
    }

    cout << temp1 << endl;

    return 0;
}
