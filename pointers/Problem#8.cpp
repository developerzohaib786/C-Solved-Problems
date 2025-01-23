#include <iostream>
using namespace std;
void displayArray(int* ptr, int size) {
    cout << "Contents of the array are:\n";
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}
int main() {
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i * 10;
    }
    displayArray(arr, 10);
    return 0;
}
