// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
 cout<<"Enter your starting number:";
 cin>>a;
 cout<<"Enter your end number:";
 cin>>b;
 if(a<b){
     for(int i=a; i<=b; ++i){
         cout<<i<<" ";
     }
 }
 else{
     cout<<"Invalid Range! Range should be greater than starting number.";}
     return 0;
}