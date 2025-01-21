#include <iostream>
using namespace std;

int main() {
   int arrays_elements=10;
   int arr[arrays_elements];
   cout<<"Enter 10 numbers for an array!"<<endl;
   for(int i=0; i<arrays_elements; i++){
      cout<<"Enter element number "<<(i+1)<<" of an array:";
      cin>>arr[i];
   }
   int a=0;
   for(int i=0; i<arrays_elements; i++){
    if(arr[i]>=10){
        a++;
}
   }
   cout<<a<<" numbers are greater than or equal to 10"<<endl;
    return 0;
}
