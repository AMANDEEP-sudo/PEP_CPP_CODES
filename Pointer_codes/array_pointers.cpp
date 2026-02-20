#include <iostream>
using namespace std;

void func1(){
    int val[3] = {5, 10, 20};
    int* ptr;
    ptr = val;
    cout<<"Elements of the array are :"<<endl;
    cout<<ptr[0]<<""<<ptr[1]<<ptr[2]<<endl;
    cout<<ptr<<" "<<val<<&val<<endl;
    cout<<&ptr;
    
}
int main(){
    func1();
    return 0;
}