#include <iostream>
using namespace std;
int main() {
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i * 10;
    }
    int* ptr = arr;
    cout << "Contents of the array are:\n";
    for (int i = 0; i < 10; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}
