#include <iostream>
using namespace std;
int main() {
 int n;
 unsigned long long factorial=1;
 cout<<"Enter a positive integer:"<<endl;
 cin>>n;
 int a=1;
 while (a<n){
     factorial *= a;
     a++;
 }
 cout<<"Factorial of your given number is:"<<factorial<<endl;
    return 0;
}