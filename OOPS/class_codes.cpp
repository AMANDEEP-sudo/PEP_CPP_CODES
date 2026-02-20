#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // default constructor
    Person() {
        name = "unknown";
        age = 0;
    }

    // parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // setter
    void setName(string name) {
        this->name = name;
    }

    // getter
    string getName(){
        return name;
    }
};

int main() {
    Person p("temp", 21);
    p.setName("aman");

    cout << p.getName();
    return 0;
}