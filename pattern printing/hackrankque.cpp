#include<iostream>
using namespace std;

int main() {
    int row, col, n;

    cout << "Enter input: ";
    cin >> n;

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            cout << n - col + 1 << " ";
        }
        for (col = 1; col <= 2 * n - 2 * row; col++) {
            cout << n - row + 1 << " ";
        }
        for (col = row - 1; col >= 1; col--) {
            cout << n - col + 1 << " ";
        }
        cout << endl;
    }

    for (row = n - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            cout << n - col + 1 << " ";
        }
        for (col = 1; col <= 2 * n - 2 * row; col++) {
            cout << n - row + 1 << " ";
        }
        for (col = row - 1; col >= 1; col--) {
            cout << n - col + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
