#include <iostream>
using namespace std;

int main() {
   int working_hours=6;
   int arr[working_hours];
   cout<<"Enter number of hours worked by each employ:"<<endl;
   for(int i=0; i<working_hours; i++){
      cout<<"Enter working hours of Emmploy "<<(i+1)<<":";
      cin>>arr[i];
   }
   for(int i=0; i<working_hours; i++){
       cout<<"Working hour of employ "<<(i+1)<<" is: "<<arr[i]<<endl;
   }

    return 0;
}
