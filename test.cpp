#include <iostream>
#include <algorithm> // Include the algorithm header for std::swap
using namespace std;

int main() {
    int arr[] = {3, 1, 2, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        cout << "Before swap: arr[" << i << "] = " << arr[i] << " arr[arr[" << i << "]] = " << arr[arr[i]] << endl;
        swap(arr[i], arr[arr[i]]);
        cout << "After swap: arr[" << i << "] = " << arr[i] << " arr[arr[" << i << "]] = " << arr[arr[i]] << endl;
    }

    cout << "Final array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
