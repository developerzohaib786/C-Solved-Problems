#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;

    cout << "Enter five integers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int nums[5] = {num1, num2, num3, num4, num5};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    cout << "The numbers in ascending order are: ";
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
