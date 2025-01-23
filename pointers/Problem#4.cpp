#include <iostream>
using namespace std;
bool searchID(int* arr, int size, int id) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == id) {
            return true;
        }
    }
    return false;
}
int main() {
    int numIDs;
    cout << "Enter the number of ID numbers: ";
    cin >> numIDs;
    int* idArray = new int[numIDs];
    cout << "Enter " << numIDs << " ID numbers:\n";
    for (int i = 0; i < numIDs; ++i) {
        cin >> idArray[i];
    }
    int searchIDNumber;
    cout << "Enter the ID number to search for: ";
    cin >> searchIDNumber;
    if (searchID(idArray, numIDs, searchIDNumber)) {
        cout << "The ID number " << searchIDNumber << " is in the array.\n";
    }
    else {
        cout << "The ID number " << searchIDNumber << " is not in the array.\n";
    }
    delete[] idArray;
    return 0;
}
