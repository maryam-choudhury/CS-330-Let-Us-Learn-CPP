#include "Person.cpp"

// Creating a derived class 'Student' that inherits from 'Person'. This is not an example of multiple inheritance, which is futher discussed in this lessons supplemental documentation.
class Student : public Person {
private:
    string Major;

public:
public:
    // Constructor for Student
    Student(string name, int age, string major) : Person(name, age), Major(major) {}

    // Function to display details of the student, including major
    void displayStudentDetails() {
        cout << "Name: " << Name << ", Age: " << Age << ", Major: " << Major << endl;
    }

    // Function to set major
    void setMajor(string major) {
        Major = major;
    }
};

int main() {
    // Creating a Person object. person1 is an object because it is an instance of the class Person.
    Person person1("Alice", 30);
    person1.displayDetails();

    // Creating a Student object
    Student student1("Mark", 25, "Music");
    student1.displayStudentDetails();

    // Modifying attributes and calling functions
    // Notice, these functions were inherited from class Person
    person1.setName("Alicia");
    person1.setAge(31);
    person1.displayDetails();

    student1.setMajor("Creative Writing");
    student1.displayStudentDetails();

    return 0;
}
