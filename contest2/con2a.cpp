
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // Input the values of a and b

    int result = 0; // Initialize result to 0

    // Loop to calculate a - b if a >= b
    for (int i = 0; i < a; ++i) {
        if (i < b) {
            continue; // Skip the iteration if i is less than b
        }
        result++; // Increment result for each iteration where i >= b
    }

    cout << result << endl; // Output the result
    return 0;
}
/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // Input the values of a and b

    // Check if a - b is non-negative
    if (a - b >= 0) {
        cout << a - b << endl; // Output the result
    } else {
        cout << 0 << endl; // Output 0 if the result is negative
    }

    return 0;
}
*/
