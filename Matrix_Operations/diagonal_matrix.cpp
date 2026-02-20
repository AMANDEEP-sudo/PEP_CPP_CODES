Move to Matrix_Operations/
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the matrix:";
    cin>>size;

    int matrix[100][100];
    cout<<"Enter elements of the matrix:"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>matrix[i][j];
        }
    }

    // output diagonal matrix;
    cout<<"the diagonal matrix is: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                cout<<"["<<matrix[i][j]<<"] ";

            }
        }
    }

}