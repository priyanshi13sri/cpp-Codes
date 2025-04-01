#include<iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value, element, found = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
        cout << "\nChoose an operation:\n";
        cout << "1. Traverse\n";
        cout << "2. Search\n";
        cout << "3. Insert\n";
        cout << "4. Delete\n";
        cout << "5. Exit\n"; 
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Traversal
                cout << "Array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
                // Searching 
                cout << "Enter the element to search: ";
                cin >> element;
                found = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == element) {
                        cout << "Element found at index " << i << endl;
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    cout << "Element not found\n";
                break;

            case 3:
                // Insertion
                cout << "Enter position to insert: ";
                cin >> pos;
                cout << "Enter value to insert: ";
                cin >> value;
                if (pos < 0 || pos > n) {
                    cout << "Invalid position \n";
                } else {
                    for (int i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++; 
                    cout << "Element inserted \n";
                }
                break;

            case 4:
                // Deletion
                cout << "Enter position to delete: ";
                cin >> pos;
                if (pos < 0 || pos >= n) {
                    cout << "Invalid position!\n";
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted \n";
                }
                break;
            case 5:
                
                cout << "Exit\n";
            break;

            default:
                cout << "Invalid choice.\n";
        }
    
    
    return 0;
}