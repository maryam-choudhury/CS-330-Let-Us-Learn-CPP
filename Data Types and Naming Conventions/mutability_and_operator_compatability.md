# Mutability & Operator Compatibility FAQs

## Are some variables mutable while others are immutable? 
In C++, every object is mutable by default. You can control mutability through the const system. Variables marked at const cannot be reassigned or modified after its initial assignment. This is true for both primitive, abstract, and derived data types. C++ allows more specificity in how immutability can be manipulated than other interpreted programming languages. For example, if const std::string& is set as the argument of a function, the function promises not to modify the string. Thus, the code below would cause a runtime error:
<br>
```
void printString(const std::string& str) {
    std::cout << str << std::endl;
    // str = "new string";  // This would cause a compile-time error
}
```
<br>
Please note that there are some weak points in the const systems, where you can modify a const object through pointer, reference, or const_cast. As you become more proficient in programming in C++, you will understand how this can lead to design flaws.

## What are the operators available for each data type?
Operators in C++ fall into six categories: arithmetic, relational, logical, bitwise, assignment, and conditional/Ternary. 
<br>
We go through the most basic operators in the dataTypesAndNaming file, but here is a comprehensive list created with info sourced from [this](https://www.geeksforgeeks.org/operators-in-cpp/) page. Remember to check the bibliography file for a complete list of sources!

### Primitive Types:
1. Integer types (`int`, `short`, `long`):
   - Arithmetic: `+`, `-`, `*`, `/`, `%`
   - Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
   - Logical: `&&`, `||`, `!`
   - Bitwise:  `&`, `|`, `^`, `~`, `<<`, `>>`
   - Assignment: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
   - Conditional/Ternary:`? :

2. Floating-point types (`float`, `double`):
   - Arithmetic: `+`, `-`, `*`, `/`
   - Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
   - Logical: `&&`, `||`, `!`
   - Assignment: `=`, `+=`, `-=`, `*=`, `/=`
   - Conditional/Ternary: `? :`

3. Boolean (`bool`):
   - Relational: `==`, `!=`
   - Logical: `&&`, `||`, `!`
   - Assignment: `=`
   - Conditional/Ternary: `? :`

4. Character (`char`):
   - Arithmetic: `+`, `-` (via ASCII)
   - Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
   - Bitwise: `&`, `|`, `^`, `~`, `<<`, `>>`
   - Assignment: `=`, `+=`, `-=`
   - Conditional/Ternary: `? :`

### Derived Types:
1. Pointers:
   - Arithmetic: `+`, `-` (pointer arithmetic)
   - Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
   - Logical: `&&`, `||`, `!` (null checks)
   - Assignment: `=`
   - Conditional/Ternary: `? :`

2. Arrays/Strings (as `char[]`, `std::string`):
   - Relational: `==`, `!=` (for strings, via methods like `compare()`)
   - Assignment: `=`

### Abstract/User-defined Types:
1. Classes/Structures (`class`, `struct`):
   - Can overload operators within the class definition to redefine their behavior. 

## Are mixed type operations allowed? If so, how are they accommodated?
Yes, C++ allows mixed-type operations via a combination of implicit type conversions and promotion rules. Going into depth on these topics is beyond the scope of starting coding in C++. However, we will go over what happens when you have two different data types in an expression, as that is something you will encounter from the get-go (examples found in the practice file dataTypesAndNaming. In this case, C++ will convert the ‘narrower’ type into the ‘wider’ object type to avoid precision loss. For example, when adding a float and a double, your output will be a double, as the int had to be converted into a double for the operation to proceed.


## At what point are identifier names and operator symbols bound in C++? For example if you declare a variable, class name, function name etc., when is it bound to the type, address? When are operators (+,*, etc.) bound to their operations?
As a static language, identifier names and operators are bound at compile time. This means that when started, the compiler will associate names with their corresponding memory address and type. You can access these memory locations by using the & operator. Below is an example.
<br>
```
#include <iostream>
using namespace std;
int main() {
    int num = 10;           
    int* numPntr = &num;     // Declaring a pointer 

    cout << "num : " << num << endl;  // Printing the value of num
    cout << "numPntr: " << numPntr << endl;  // Printing the address in numPntr (same as &num)
    cout << "*numPntr: " << *numPntr << endl;  // Printing the value pointed to by numPntr (same as num)
}
```
<br>
Your output would look something like this: 

<blockquote><p> 
num : 10 <br>
numPntr: 0x16b95ae20 <br>
*numPntr: 10 <br>
</p></blockquote>
<br>
<p> While looking through this code, you will see the use of & to find the address of the variable num, and this address was then stored in numPntr, an example of something called a pointer. Pointers are most commonly used to store the memory address of an object. The pointer's 'type' matches the type of the variable whose address you are trying to locate. In the example above, we are looking for the variable num, which is an int. Thus, to declare our pointer, we wrote: </p> <br> 
<blockquote><p> 
int* numPntr = &num; // notice the value stored in numPntr is the address of num</p>
</p></blockquote>

<p>The asterisk (*) is there simply because that is the correct syntax for declaring a pointer (you insert it directly after your pointer type).</p>
