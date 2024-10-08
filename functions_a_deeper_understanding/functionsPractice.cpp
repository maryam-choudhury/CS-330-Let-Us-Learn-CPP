#include <iostream>
#include <string> 

using namespace std;

// Function to multiply two numbers and return the result
int multiply(int a, int b) {
    return a * b;
}

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive call
}

// Function to split a string into two parts and return both strings
void splitString(const string& str, string& firstHalf, string& secondHalf) {
    int mid = str.length() / 2;
    firstHalf = str.substr(0, mid);
    secondHalf = str.substr(mid);
}

// Function to test if C++ is pass-by-value or pass-by-reference
void testPassByValue(int a) {
    a = 100;  // Modifying the parameter (note that this won't change the original value)
}

void testPassByReference(int& a) {
    a = 100;  // Modifying the parameter (Note that this changes the original value. Do you see the difference btwn this and the prior function?)
}

// Using arrays to return multiple values 
void getArrayValues(int arr[2]) {
    arr[0] = 10;
    arr[1] = 20;
}

int main() {
    // Call multiply function
    int resultMultiply = multiply(5, 6);
    cout << "5 * 6 = " << resultMultiply << endl;

    // Call factorial function
    int resultFactorial = factorial(5);
    cout << "Factorial of 5 is " << resultFactorial << endl;

    // Call splitString function
    string input = "HelloWorld";
    string firstHalf, secondHalf;
    splitString(input, firstHalf, secondHalf);
    cout << "First half: " << firstHalf << ", Second half: " << secondHalf << endl;

    // Testing pass-by-value
    int x = 50;
    testPassByValue(x);
    cout << "After pass-by-value test, x = " << x << endl;  // x remains unchanged

    // Testing pass-by-reference
    testPassByReference(x);
    cout << "After pass-by-reference test, x = " << x << endl;  // x is changed

    // Using arrays to return multiple values
    int arr[2];
    getArrayValues(arr);
    cout << "Array values: " << arr[0] << ", " << arr[1] << endl;  // Array values are set

    return 0;
}
