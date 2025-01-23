#include <iostream>
using namespace std;
int linearSearch(int* arr, int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[15];
    cout << "Enter 15 elements for the array:\n";
    for (int i = 0; i < 15; ++i) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key value to search for: ";
    cin >> key;
    int index = linearSearch(arr, 15, key);
    if (index != -1) {
        cout << "The key value " << key << " is found at index " << index << ".\n";
    }
    else {
        cout << "The key value " << key << " is not found in the array.\n";
    }

    return 0;
}
