#include <iostream>
using namespace std;

int main(){

int mat1[2][3]={{1,2,3},{3,4,5}};
int mat2[3][2]={{6,7},{8,9},{4,5}};
int result[2][2]={0};
for(int i=0; i<2; i++){
    for(int j=0; j<2;j++){
        for(int k=0; k<3;k++){
         result[i][j] += mat1[i][k]*mat2[k][j];
        }
    }
}
cout<<"Resultant matrix is: "<<endl;
for(int i=0; i<2;i++){
    for(int j=0; j<2; j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
