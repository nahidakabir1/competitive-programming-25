
#include <iostream>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    bool a_Div = (a % k == 0);
    bool b_Div = (b % k == 0);

    if (a_Div && b_Div) {
        cout << "Both" << endl;
    } else if (a_Div) {
        cout << "Memo" << endl;
    } else if (b_Div) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }

    return 0;
}
