#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 7, 19, 4, 9};
    int n = 5;
    int sum = 0;

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;
    cout << "\nSum: " << sum;
    cout << "\nAverage: " << average << endl;
    return 0;
}
