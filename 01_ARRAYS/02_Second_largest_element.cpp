#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 7, 19, 19, 9};
    int n = 5;

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        cout << "No second largest element" << endl;
    } else {
        cout << "Second largest: " << secondLargest << endl;
    }
    return 0;
}
