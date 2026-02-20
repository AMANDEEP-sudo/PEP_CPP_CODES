Move to Character_Programs/
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int ascii_value = static_cast<int>(ch);
    cout << "The ASCII value of '" << ch << "' is: " << ascii_value << endl;
    return 0;
}