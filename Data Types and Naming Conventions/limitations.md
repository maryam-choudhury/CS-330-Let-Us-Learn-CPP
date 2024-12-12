# Getting Into Limitations
If you have already run through the practice file for this section, you have probably realized that C++ is pretty strict about declaring variable types and adhering to them during operations. This helps with type safety, otherwise known as preventing type errors, but it also can be limiting. Below, I will go through the situations encountered in the practice examples in further detail so we can explore these limitations.

## What Adding int and float Taught Us
When adding Ints and floats, C++ converts the int to a float before completing the operation. This concept is known as a widening conversion and ensures we are not losing precision. Since we are changing a variable into something increasingly specific, we are "widening." An example of narrowing includes storing a double in an int variable; this is a loss of precision as the decimal values are dropped. This is also an example of implicit casting. 
<br>
<br>
Other combinations are less expected and less graceful, such as how adding a double and an int will result in a floating-point variable type.

## What Instantiating array Taught Us
C++ enforces type homogeneity in arrays and vectors, which is a limitation languages such as Python and Java don't have. This means that all variable types within these structures must be the same. If you want to put two different variable types together in a similar fashion as with an array, you will have to resort to more complex structures, such as a struct or union.

## Are There Limitations on much/long we can work with this variable?
Yes! This is where the concepts of 'lifetime' and 'scope' come into play. <br>

#### Scope
Where you have access to a variable. The two most common variable scopes are those of local and global variables.  <br> <br> 
Local variables are declared inside a function and can only be accessed inside said function. Therefore, their scope is limited to the function. On the other hand, global variables are declared outside of all functions at the top of a file, can be accessed all throughout the program, and, thus, have a cope that lasts the runtime of the program. Below is an example of code that implements both a local and global variable. Copy and paste this code into a file in your IDE and see what you get when you run it!
```
#include<iostream> 
using namespace std; 
{
int globalVar = 5; // Global variable

int main() {
    int localVar = 10; // Local variable
    cout << localVar << endl; // Works, local variable still in scope
}
cout << globalVar << endl; // Global variable works
cout << localVar << endl; // Error: out of scope, your local variable does not scope this far!
}
```

#### Lifetime
Lifetime starts when a variable is initialized and memory is allocated to it. <br> <br> 
User-defined variables and objects usually have a lifetime that ends when the object goes out of scope. There are many exceptions to this object rule, and things get even more complicated when you learn about 'reference' lifetimes. If you are interested in learning more about these topics, please visit [this](https://en.cppreference.com/w/cpp/language/lifetime) page by cpprefference, and refer to the accordingly labeled learning resources in the bibliography. For now, I guess you could say that information is out of 'scope'!

## Miscellaneous Pitfalls
[Automatic garbage collection](https://www.geeksforgeeks.org/garbage-collection-python/) refers to programming languages automatically eliminating objects that are no longer being referenced. C++ does not have this feature, so you have to be careful and manage memory resources with intention.

