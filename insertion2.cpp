#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++; 
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}