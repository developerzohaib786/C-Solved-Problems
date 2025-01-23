#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int* arr, int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
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
    sort(arr, arr + 15);
    cout << "Sorted array:\n";
    for (int i = 0; i < 15; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int key;
    cout << "Enter the key value to search for: ";
    cin >> key;
    int index = binarySearch(arr, 15, key);
    if (index != -1) {
        cout << "The key value " << key << " is found at index " << index << ".\n";
    }
    else {
        cout << "The key value " << key << " is not found in the array.\n";
    }
    return 0;
}
