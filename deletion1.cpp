#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to delete: ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
    } else {
        
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
