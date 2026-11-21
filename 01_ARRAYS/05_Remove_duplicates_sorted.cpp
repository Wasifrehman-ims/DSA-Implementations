#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4};
    int n = 8;
    if (n == 0) {
        cout << "Array size: 0" << endl;
        return 0;
    }
    int writeIndex = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[writeIndex] = arr[i];
            writeIndex++;
        }
    }
    cout << "Unique elements: ";
    for (int i = 0; i < writeIndex; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNew size: " << writeIndex << endl;
    return 0;
}
