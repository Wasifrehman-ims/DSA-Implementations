#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 9, 12, 19};
    int n = 5;
    int target = 12;
    int low = 0;
    int high = n - 1;
    int position = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            position = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (position == -1) {
        cout << target << " not found" << endl;
    } else {
        cout << target << " found at index " << position << endl;
    }
    return 0;
}
