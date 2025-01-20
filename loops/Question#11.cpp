#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, count = 0, oddNumber = 1;
    cout << "Enter the number of odd numbers to sum: ";
    cin >> N;
    do {
        sum += oddNumber;       
        oddNumber += 2;         
        count++;                
    } while (count < N);        
    cout << "The sum of the first " << N << " odd numbers is: " << sum << endl;

    return 0;
}
