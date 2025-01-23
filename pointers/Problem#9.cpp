#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void bubbleSortDescending(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    srand(time(0));
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
    cout << "Original array:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSortDescending(arr, size);
    cout << "Array sorted in descending order:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
