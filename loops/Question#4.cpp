#include <iostream>
using namespace std;
int main() {
 int n;
 cout<<"Enter a number for Fibonacci sequence"<<endl;
 cin>>n;
 if(n<=0){
     cout<<"Please enter a positive number";
     return 1;
 }
          cout<<"The Fibonacci sequence is:\t";
  int a=0;
 int b=1;
     for(int i=0; i<=n; ++i)
     {
         cout<<a<<" ";
         int c= a+b;
         a=b;
         b=c;
     }
 
 
     cout<<endl;

    return 0;
}