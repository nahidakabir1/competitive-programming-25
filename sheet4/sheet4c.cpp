#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int x = s1.size();
    int y = s2.size();
    int min_index = min(x, y);
    int flag = -1;

    for (int i = 0; i < min_index; i++) {
        if (s1[i] > s2[i]) {
            cout << s2 << endl;
            flag = 0;
            break;
        } else if (s1[i] < s2[i]) {
            cout << s1 << endl;
            flag = 0;
            break;
        }
    }

    if (flag == -1) {
        if (x < y) {
            cout << s1 << endl;
        } else if (x > y) {
            cout << s2 << endl;
        } else {
            cout << s1 << endl;
        }
    }

}
