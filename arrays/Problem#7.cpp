#include <iostream>
using namespace std;

// Function to find the highest number
int findHighest(const int rows, const int cols, int array[][10]) {
    int maxVal = array[0][0]; // Assume the first element is the largest
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > maxVal) {
                maxVal = array[i][j];
            }
        }
    }
    return maxVal;
}

int main() {
    const int rows = 3, cols = 4;
    int array[rows][10] = {
        {1, 5, 9, 12},
        {4, 8, 3, 11},
        {15, 2, 6, 7}
    };

    // Displaying highest numbers
    int highest = findHighest(rows, cols, array);
    cout << "The highest number in the 2D array is: " << highest << endl;

    return 0;
}
