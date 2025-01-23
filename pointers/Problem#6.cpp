#include <iostream>
using namespace std;
int main() {
    int intVar = 10;
    float floatVar = 20.5;
    char charVar = 'A';
    double doubleVar = 30.123456;
    int* intPtr = &intVar;
    float* floatPtr = &floatVar;
    char* charPtr = &charVar;
    double* doublePtr = &doubleVar;
    cout << "Size of int pointer: " << sizeof(intPtr) << " bytes" << endl;
    cout << "Size of float pointer: " << sizeof(floatPtr) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(charPtr) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(doublePtr) << " bytes" << endl;
    cout << "Data held by int pointer: " << *intPtr << endl;
    cout << "Data held by float pointer: " << *floatPtr << endl;
    cout << "Data held by char pointer: " << *charPtr << endl;
    cout << "Data held by double pointer: " << *doublePtr << endl;
    return 0;
}
