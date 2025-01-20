#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a positive number to continue and enter a negative number to stop the loop: "<<endl;
while(true){
   cout<<"Enter your a number: "<<endl;
   cin>>n;
   if(n>0){
       cout<<"You entered: "<<n<<endl;
   }
   else{
       cout<<"You entered a negative number!"<<endl;
       break;
   }
    
}
cout<<"Loop has ended!";
    return 0;
}