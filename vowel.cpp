Move to Vowel_Programs/
// write a cpp code to check for vowels in the string.
#include<iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    cout<<"Vowels in the string are: ";
    for(char c : str){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            cout<<c<<" ";
        }
    }
    cout<<endl;
    return 0;
}