#include <iostream>
#include <string>
#include <map>  // For map data structure
using namespace std;

// Example function
int addNumbers(int a, int b) {
    return a + b; // Convention: functions use descriptive names in camelCase
}

int main() {
    // ********************** SECTION 1: PRIMITIVE TYPES **********************
    // int
    int myInt = 10; // Convention: lowercase, descriptive 
    cout << "Integer value: " << myInt << endl;
    
    // Character
    char myChar = 'A'; // Convention: single quotes for characters
    cout << "Character value: " << myChar << endl;
    
    // Boolean
    bool myBool = true; // Convention: descriptive (isSomething, hasSomething)
    cout << "Boolean value: " << myBool << endl;
    
    // Floating point
    float myFloat = 3.14f; // Convention: 'f' suffix for float literals. Note that literals are immutable.
    cout << "Float value: " << myFloat << endl;
    
    // Double floating point
    double myDouble = 3.14159265358979; // Convention: no suffix for double literals
    cout << "Double value: " << myDouble << endl;
    
    // Void (cannot be instantiated but used in function returns)
    // Example: void function in C++ does not return any value
    
    // Wide character
    wchar_t myWideChar = L'Ω'; // Convention: 'L' prefix for wide characters
    wcout << L"Wide character value: " << myWideChar << endl;
    
    // ********************** SECTION 2: DERIVED TYPES **********************
    // Function
    int sum = addNumbers(5, 7); // Function call, refer to the addNumber's instantiation above function main
    cout << "Function result (addNumbers): " << sum << endl;
    
    // Array
    int myArray[5] = {1, 2, 3, 4, 5}; // Convention: descriptive, plural for arrays
    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Pointer
    int* myPtr = &myInt; // Convention: pMyVar (indicating pointer), descriptive
    cout << "Pointer value (address of myInt): " << myPtr << endl;

    // Reference
    int& myRef = myInt; // Convention: descriptive and indicates reference nature
    cout << "Reference value (alias of myInt): " << myRef << endl;

    // ********************** SECTION 3: ABSTRACT/USER-DEFINED TYPES **********************
    // Class
    class MyClass {
    public:
        int x;
        void display() { cout << "MyClass value: " << x << endl; }
    };
    
    MyClass obj; // Convention: PascalCase for classes
    obj.x = 100;
    obj.display();
    
    // Structure
    struct MyStruct {
        int a;
        float b;
    };
    
    MyStruct myStruct = {5, 7.5}; // Convention: similar to class, CamelCase
    cout << "Structure values: " << myStruct.a << ", " << myStruct.b << endl;
    
    // Union
    union MyUnion {
        int x;
        float y;
    };
    
    MyUnion myUnion; // Convention: similar to struct
    myUnion.x = 5; 
    cout << "Union value (as int): " << myUnion.x << endl;
    myUnion.y = 3.14; 
    cout << "Union value (as float): " << myUnion.y << endl;
    
    // Enumeration
    enum MyEnum { ONE, TWO, THREE }; // Convention: PascalCase, uppercase for constants
    MyEnum myEnum = TWO;
    cout << "Enumeration value: " << myEnum << endl;

    // Typedef defined DataType
    typedef int MyInt;
    MyInt myTypedefVar = 10; // Convention: same as int
    cout << "Typedef int value: " << myTypedefVar << endl;

    // Map
    map<string, int> myMap; // Convention: descriptive, CamelCase for container types
    myMap["first"] = 1;
    myMap["second"] = 2;
    cout << "Map values: ";
    for (auto const &pair : myMap) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // ********************** SECTION 4: OPERATIONS ON VARIABLES **********************
    // Experimenting with operations
    int int1 = 5;
    float float1 = 2.5;

    // Adding int and float (widening conversion)
    float result1 = int1 + float1; // Int is converted to float
    cout << "Result of int + float: " << result1 << " (float)" << endl;

    // Dividing of int by float
    float result2 = int1 / float1; // Int is converted to float
    cout << "Result of int / float: " << result2 << " (float)" << endl;

    // Dividing int by int
    int result3 = int1 / 2; // Integer division
    cout << "Result of int / int: " << result3 << " (int)" << endl;

    // Explicit type conversion AKA casting
    float result4 = float(int1) / 2; // Explicit conversion of int to float
    cout << "Result of explicit casting int to float: " << result4 << endl;

    // Arrays can only hold elements of the same type
    int arr1[3] = {1, 2, 3}; 
    // float arr2[3] = {1.0f, 2, 3}; // This would be illegal due to mixed types. See what happens when you try to run this line!
    
    // Can we put different data types in the same array? No, arrays require homogeneous data types in C++
    // A workaround is to use structures or unions. We will address these in a future section. 
    
    // Implicit conversions
    int x = 10;
    double y = x; // Implicit widening conversion from int to double
    cout << "Implicit conversion from int to double: " << y << endl;

    // Implicit narrowing conversion (might lose data)
    double z = 9.99;
    int w = z; // Implicit narrowing conversion from double to int
    cout << "Implicit narrowing conversion from double to int: " << w << endl;

    // Trying to add incompatible types (e.g., int and string) will result in an error
    // cout << myInt + "string"; // Illegal
    
    return 0;
}
