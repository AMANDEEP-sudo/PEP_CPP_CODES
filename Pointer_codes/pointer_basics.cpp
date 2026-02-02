#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"Address of stored in ptr: "<<&ptr2<<endl;
    

    return 0;

}



