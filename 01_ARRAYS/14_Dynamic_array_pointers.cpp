#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* arr = new int[n];

    arr[0] = 12;
    arr[1] = 7;
    arr[2] = 19;
    arr[3] = 4;
    arr[4] = 9;

    cout << "Dynamic array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
