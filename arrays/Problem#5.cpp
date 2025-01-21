#include <iostream>
using namespace std;

int main(){
    int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3]={{5,6,7},{2,4,6},{1,5,6}};
    // initializing resultant matrix
    int result[3][3]={0};
    // calculating sum
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j]= mat1[i][j]+mat2[i][j];
        }
    }
    // displaying resultant matrix
    cout<<"Resultant matrix is: "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
    }