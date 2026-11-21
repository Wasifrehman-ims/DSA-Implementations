#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 7, 19, 4, 9};
    int n = 5;
    int low = 0;
    int high = n - 1;
    while (low < high) {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
