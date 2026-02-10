// ...existing code from special_char_counter.cpp...Move to Special_Character_Programs/
// write a cpp code to count special characters  and whitespaces in the string without using stl.

#include<iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    int specialcount = 0;
    int spaceCounter = 0;

    for(char c : str){
        if((c >= 33 && c <= 47) || (c >= 58 && c <= 64) ||
           (c >= 91 && c <= 96) || (c >= 123 && c <= 126)){
            specialcount++;
        }
        else if(c == ' ' || c == '\t' || c == '\n'){
            spaceCounter++;
        }
    }

    cout<<"Number of special characters: "<<specialcount<<endl;
    cout<<"Number of whitespaces: "<<spaceCounter<<endl;
    cout<<"Total count : "<<specialcount + spaceCounter <<endl;


    return 0;
    
}