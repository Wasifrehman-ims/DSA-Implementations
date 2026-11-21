#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 7, 19, 4, 9};
    int n = 5;
    int k = 2;
    k %= n;

    for (int count = 0; count < k; count++) {
        int first = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = first;
    }

    cout << "Left rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
