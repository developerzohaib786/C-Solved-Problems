#include <iostream>
using namespace std;

int main(){
    int matrix[3][3]={{5,6,7},{2,4,6},{1,5,6}};
    // initializing resultant matrix
    int transpose[3][3]={0};
    // calculating transpose of a matrix
    int i=0;
    while(i<3){
            for(int j=0; j<3; j++){
                transpose[j][i]=matrix[i][j];
            }
            i++;
    }
    // displaying the transpose of a matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    }