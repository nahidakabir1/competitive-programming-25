#include <iostream>
using namespace std;

int main() {
    double X, P;
    cin >> X >> P;

    // Calculate original price
    double original = P / (1 - X / 100);

    // Manually round to two decimal places
    long long scaled = original * 100 + 0.5; // Multiply by 100 and round
    double rounded = scaled / 100.0;

    // Print the result manually digit by digit
    long long whole = scaled / 100;
    int decimal = scaled % 100;

    cout << whole << ".";
    if (decimal < 10) {
        cout << "0"; // Add leading zero if needed
    }
    cout << decimal << endl;

    return 0;
}
