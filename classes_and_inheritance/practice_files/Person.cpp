#include <iostream>
#include <string>
using namespace std;

// Creating the base class 'Person'
class Person {
protected:
    string mName;
    int mAge;

public:
    // Constructor for Person
    Person(string name, int age) : mName(name), mAge(age) {}

    // This function displays a Person attribute's details
    void displayDetails() {
        cout << "Name: " << mName << ", Age: " << mAge << endl;
    }

    // Function to set name
    void setName(string name) {
        mName = name;
    }

    // Function to set age
    void setAge(int age) {
        mAge = age;
    }
};
