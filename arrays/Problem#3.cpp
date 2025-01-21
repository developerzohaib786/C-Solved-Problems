#include <iostream>
using namespace std;

void SwapArray(int arr[], int n){
 if(n>1){
     int temp=arr[0];
      arr[0]= arr[n-1];
      arr[n-1]=temp;
 }   
 else{
     cout<<"Array should be greater then one element!";
 }
}
void displayArray(int arr[], int n){
    // using for loop to display the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter number of elements in an array! ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array! ";
    int i=0;
 while(i<n){
     cin>>arr[i];
     i++;
 }
 cout<<endl;
 cout<<"Array before swaping!"<<endl;
 displayArray(arr,n);
 cout<<"Array after swaping the variables";
 SwapArray(arr, n);
  displayArray(arr,n);
 
 
}















