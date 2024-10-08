# Functions: A Deeper Understanding
<p> To gain a better understanding of functions, we will walk through some frequently asked questions.</p>

## What is the syntax for declaring a function in C++?
<p>In C++ the basic function declaration structure is as follows: </p>

```cpp
  return_type function_name(parameter_list) {
    // function body
  }
```
<p>Look at this section's practice file for some pre-written functions you can mess around with!</p>

## Are there any rules about where the function has to be placed in your code file so that it can run?
<p> The C++ compliler does not enforce strict rules on where functions are placed, but there are many standard practices that exist to boost the readability and organization of your code. 
A common convention is placing your function declarations and definitions seperate from your main function,
only calling other functions in main(). This makes for an 'elegant' code. </p>


## Does C++ support recursive functions?
<p> First off, you may be asking: "What even is a recursive functions?". Let's address that  question first!
A recursive function is a function that calls itself in order to solve a problem, making it easier for the programmer to accomplish their goal, as they can break their problem down into simpler subproblems.
So, that's perfectly clear and we will never have to go through this again. No? Let's look at an example to get a better idea of what's going on. </p>

```cpp
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1); // The sum() function calls itself. It reduces the value of k each time it is called, until k = 0.
    } else {
        return 0;
    }
}

int main() {
    cout << sum(10); // Outputs 55
    return 0;
}
```

## Can functions in C++ accept multiple parameters? Can they be of different data types?
<p> Yes to both questions! C++ functions can acfept multiple parameters that can be of the same or different data type. To see this in action, refer to the practice file for this section!</p>

## Can functions in C++ return multiple values at the same time?
<p> Many a new C++ programmer asks this question, only to be dissapointed that the answer is, natively, no. However, do not fret! There are a couple of work arounds. </p>

  1. Modifying values thru **pointers** and **references**.
  2. Returning a **structure** containing multiple values.
  3. Put the values you want to return into an **array** and return that instead.
<p>
A faithful reader of this repository may already be familiar w/ pointers (path: main> Data Types and Naming Conventions > mutability_and_operator_compatability.md).
Examples of structures and arrays being used to return multiple values can be found in the practice file for this folder.
</p>

## Is C++ pass-by-reference or pass-by-value?
<p> Without any frills, C++ is pass-by-value, meaning that a copy of the argument is what is passed to the function. Because of this, modifying the
parameter within that same function does not affect the original value. However, C++ also supports pass-by-reference, where a reference to the argument is passed to the function
so modifying it (now technically a parameter as it is inside a function) changes the original value. Faithful repository issues will again have a cheeky advantage, as we covered this topic in the last section (path: main>Data Types and Naming Conventions>mutability_and_operator_compatability (see the question "At what point are identifier...").
To get everyone on the same page, here is a TLDR: You can access memory locations by using the & operator. Once you access that adress, there are a couple of clever ways to modify the program's original data.</p>

```cpp
void increment(int &x) { //accessing the address of x
    x++; // original x (that would have been declared ealier) is being modified
}
```
## In C++ here are the arguments, parameters, and local variables stored during execution?
<p> Local variables, including function parameters, are typically stored on the stack. Dynamically allocated memory (allocated via 'malloc') is stored in the heap. 

It is important to note that you can have pointer values on the stack that point to data in the heap. For instance: </p>

```cpp
int *p = new int(5); // Pointer is on stack, but '5' is on heap
```
If you are unfamiliar with the terms stack and heap, please look at [this article](https://danielmiessler.com/p/difference-stack-heap-based-memory). Also, remember that other resources and the sources I've used can be found in the bibliography for this section! <br>

Below is a helpful diagram ([source](https://medium.com/@abnerrjo/factorial-function-in-assembly-363f507773e2) reiterating the ability to connect the stack and heap. 
![Image is diagram showing flow between stack and heap. Both are labeled non executable, the former is labeled 'managed by compiler' and the latter is labeled 'managed by the programmer'](https://i.sstatic.net/HOY4C.png)

## What are the scoping rules in C++?

C++ follows block scope rules, which are as follows:

1. **Local Variable Scope**:
   - Defined inside a function or block and are only accessible within that block.
   - Resulting lifetime: variables are destroyed after exiting their subprogram/function
   
2. **Global Variable Scope**:
   - Declared outside of all functions and accessible from any function within the same file or program.
   - Resulting lifetime: Persist for the duration of the program
<p>Local and global variable examples can be found in the practice program for this section. </p>

## Are side-effects possible? Are there guardrails against side-effects?
<p>A function with side-effects interacts w/ or modifies the state of external elements, beyond just returning a value. In C++, this often happens when using global variables, pass-by-reference, or pointers.
Our example for the & operator above doubles as an example of a side-effect. <br><br>
  While C++ doesn't enforce guardrails against side-effects, they are cumbersome when unintentional. Thus, we 
  must understand how to avoid them. As mentioned in the last section, in order to prevent side-effects you must ensure
that your functions are only changing the data of what they are explicity meant to be modifying. A way to ensure this is by, when appropriate, using 'const'.</p>
