#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    int largest;
    // receving input numbers from the users 
    cout<<"Enter your first number"<<endl;
    cin>>a;
    cout<<"Enter your second number"<<endl;
    cin>>b;
    cout<<"Enter your third number"<<endl;
    cin>>c;
    cout<<"Enter your forth number"<<endl;
    cin>>d;
    // processing the numbers 
 if (a >= b) {
        if (a >= c) {
            if (a >= d) {
                largest = a;
            } else {
                largest = d;
            }
        } else {
            if (c>= d) {
                largest = c;
            } else {
                largest = d;
            }
        }
    } else {
        if (b >= c) {
            if (b >= d) {
                largest = b;
            } else {
                largest = d;
            }
        } else {
            if (c>= d) {
                largest = c;
            } else {
                largest = d;
            }
        }
    }
    cout<<"The largest number is: "<<largest<<endl;
    return 0;
 }
