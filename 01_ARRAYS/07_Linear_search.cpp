#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 7, 19, 4, 9};
    int n = 5;
    int target = 19;
    int position = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        cout << target << " not found" << endl;
    } else {
        cout << target << " found at index " << position << endl;
    }
    return 0;
}
