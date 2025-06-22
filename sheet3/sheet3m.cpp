#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[1000];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }


    int minIndex = 0;
    int maxIndex = 0;


    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }


    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;


    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
