#include <iostream>
#include <string>
using namespace std;

// Creating the base class 'Person'
class Person {
protected:
    string Name;
    int Age;

public:
    // Constructor for Person
    Person(string name, int age) : Name(name), Age(age) {}

    // This function displays a Person attribute's details
    void displayDetails() {
        cout << "Name: " << Name << ", Age: " << Age << endl;
    }

    // Function to set name
    void setName(string name) {
        Name = name;
    }

    // Function to set age
    void setAge(int age) {
        Age = age;
    }
};

