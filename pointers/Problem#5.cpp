#include <iostream>
using namespace std;
double calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int numScores;
    cout << "Enter the number of scores: ";
    cin >> numScores;
    int* scores = new int[numScores];
    cout << "Enter " << numScores << " scores:\n";
    for (int i = 0; i < numScores; ++i) {
        cin >> scores[i];
    }
    double average = calculateAverage(scores, numScores);
    cout << "The average score is: " << average << endl;
    bubbleSort(scores, numScores);
    cout << "The scores in ascending order are:\n";
    for (int i = 0; i < numScores; ++i) {
        cout << scores[i] << " ";
    }
    cout << endl;
    delete[] scores;
    return 0;
}
