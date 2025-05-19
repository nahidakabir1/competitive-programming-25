
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B; // Read two integers: start (A) and end (B) of the range.

    int count = 0;  // 0 means no lucky number found yet

    for (int i = A; i <= B; i++) { // Read two integers: start (A) and end (B) of the range.
        int t = i,last;//t is a copy of i. We'll use t to check the digits without changing the original number i

        while (t) {//“Keep checking the digits one by one until there are no digits left.”
            last = t % 10; //Get the last digit of t. For example, if t = 47, then last = 7.
            if (last ==4 || last == 7) {
                t=t/10;
                    }else{
                break;/* Check if the last digit is 4 or 7:If yes, remove that digit (t = t / 10) and continue checking the next digit.If not, break out — the number is not lucky.*/
            }
        }

        if (t == 0) {
            cout << i << " ";
            count++;
        }//If t becomes 0, that means all digits were either 4 or 7 → it's a lucky number! So, print it and increase the count.


    }

    if (count == 0) {
        cout <<" -1";//If no lucky numbers were found, print -1.
    }

    cout << endl;
    return 0;
}
