#include <iostream>
using namespace std;

int main() {
    int n, i, temp;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reversing the array
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Printing the reversed array
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
