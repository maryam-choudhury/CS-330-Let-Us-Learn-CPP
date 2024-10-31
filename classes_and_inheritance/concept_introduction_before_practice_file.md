# Understanding Objects and Inheritance in C++

Colloquially, what do we mean when we say we *inherited* something from someone else? Say person x tells you they inherited their brown hair from their mother. They mean that their relation to their mother is what gave them their brown hair. Post-passing down this trait, both mother and person x have brown hair. Comparatively, inheritance in C++ is “the capability of a class to derive properties and characteristics from another class” ([Geeks for Geeks](https://www.geeksforgeeks.org/inheritance-in-c/), 2024).
<br> <br>
In this lesson, we will first explore concepts related to inheritance via question-answer format. These questions will reference examples in the practice files for this section, which you should look at concurrently or after reading this page. Lastly, there will be a bonus section on inheritance syntax. As always, the sources I have used during the creation of this lesson can be found in the associated bibliography!

## Does C++ support objects or something similar (e.g., structs or records)?
Yes, C++ supports object thru classes! A class is like the blueprint/recipe for an object, and an object is an *instance* of the class. <br> <br>

C++ also supports structs, which is one of three class types (structure, class, union). The key differences between the two are that structs are public by default and an instance of one is a variable, and a class is private by default and an instance is a object. With structs, you can group variables of different types together (think ArrayList in Java). 

In the practice files, you'll see the following Person class construction.

```cpp
class Person {
    string mName;
    int mAge;
    // ...
};
```
Here is an example of a struct construction:

```cpp
struct Point {
    int x, y;
};
```

## Are there naming conventions for objects, instance variables, or functions that I should be aware of?
There are so many! As s a reminder, conventions are different than syntax rules. I have listed some of the most pressing below, and have linked the rest in effort to keep things simple and clear!

- Class Naming Conventions
    - Start with an uppercase letter
    - Written in CamelCase
    - A noun
    - No underscores
    - Note:
      - Class attributes (aka static/private memeber variables) are variables associated with the class itself, and declared inside the class definition. When naming them, it's common to see lowerase m as the names prefix. You'll see examples of this in the practice files (mName, mAge).
- Instance variables
      -   Unlike private member variables, these variables belong to class object.
      - The usual suspects: beginning with a letter, no special characters etc.   
- Functions
    - start with a verb, an action word. For example, 'displayDetails'.
```cpp
//In this practice file example, you'll see the following code, which displays a class attribute and a function call.
void setName(string name) { 
    mName = name;
}
```

## How does inheritance work in C++? Does your it support multiple inheritance?
Yes! Inheritance is supported in C++. Derived classes are like the person x in our example from the introduction, while the other in that situation would be the base class. <br>
Here is a basic example of inheritance from the practice files:
```cpp
class Student : public Person {
    // Student inherits from Person
};
```
C++ also supports multiple inheritance. This means that your derived class is inheriting attributes from multiple base classes. Say person x inherits brown hair from their mom and red hair from their dad. <br>
The syntax for multiple inheritance is a little less straightforward than the context. Here is a direct quote from GeeksForGeeks that puts it simply.
>
>  ```cpp
> class  derived_class_name : access-specifier  base_class_name
>  {
>    //    body ....
>  };
>  ```
>where, <br>
>class: keyword to create a new class <br>
>derived_class_name: name of the new class, which will inherit the base class <br>
>access-specifier: Specifies the access mode which can be either of private, public or protected. If neither is specified, private is taken as default. <br>
>base-class-name: name of the base class. <br>
>Note: A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares. <br>

## How does C++ deal with overloading method names and resolving those calls?
In case what this question is asking is not clear, let's go over what it means to overload a method, in terms of inheritance. You overload a method when a derived class has a method with the same name as one in the base class. <br>
### What Could Be
How does C++ deal with this situation? If it supported overloading, the definition of the 'copied' method name in the derived class would be executed, rather than that in the base class. However, C++ does not have an overload resolution.
### What Is
What happens instead is called 'name hiding'. When the function in the derived class with the copied name is called, even tho the class has inherited a function with the same name from the parent, the function definition in the derived class will be the only one executed. <br> <br>

This may be hard to conceptually understand. Let's look at this example, also sourced from [GeeksForGeeks](https://www.GeeksForGeeks.org/does-overloading-work-with-inheritance/) 

 ```cpp
#include <iostream>
using namespace std;
class Base
{
public:
    int f(int i)
    {
        cout << "f(int): ";
        return i+3;
    }
};
class Derived : public Base
{
public:
    double f(double d)
    {
        cout << "f(double): ";
        return d+3.3;
    }
};
int main()
{
    Derived* dp = new Derived;
    cout << dp->f(3) << '\n';
    cout << dp->f(3.3) << '\n';
    delete dp;
    return 0;
}
```
> "The output of this program is: <br>
> f(double): 6.3 <br>
> f(double): 6.6 "

> " Instead of the supposed output: <br>
> f(int): 6 <br>
> f(double): 6.6 "

## Is there anything else that’s important to know about objects and inheritance in C++?
If you are up for it, visit [this](https://www.GeeksForGeeks.org/diamond-problem-in-cpp/) link to learn abut the issues that arise when a derived class inherits multiple base classes that share a common ancestor. This is known as the diamond problem!









