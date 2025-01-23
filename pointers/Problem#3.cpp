#include <iostream>
using namespace std;
int main() {
    int x = 10;
    float y = 20.5;
    int* ptrX = &x;
    float* ptrY = &y;
    cout << "Value of x: " << *ptrX << endl;
    cout << "Address of x: " << ptrX << endl;
    cout << "Value of y: " << *ptrY << endl;
    cout << "Address of y: " << ptrY << endl;
    return 0;
}
