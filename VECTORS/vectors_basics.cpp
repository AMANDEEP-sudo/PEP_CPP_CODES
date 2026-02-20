#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    //add element to vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //print elements of vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout << endl;

    return 0;
}