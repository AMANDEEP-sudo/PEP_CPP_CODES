#include<iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of vector: ";
    cin>>size;
    vector<int> v;
    cout<<"Enter elements of vector: ";
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }

    // printing vector
    cout<<"vector elements:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}