#include <iostream>
using namespace std;
int main() {
    int arr[] = {12, 7, 19, 4, 9};
    int n = 5;
    int evenCount = 0;
    int oddCount = 0;
    cout << "Even elements: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            evenCount++;
        }
    }
    cout << "\nOdd elements: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            oddCount++;
        }
    }
    cout << "\nEven count: " << evenCount;
    cout << "\nOdd count: " << oddCount << endl;
    return 0;
}
