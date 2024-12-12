# Naming Conventions in C++:

**What are the naming requirements for variables in C++?** <br/> 
- Names must begin with a letter or underscore, not a number
- They cannot contain special characters such as !, #, %, whitespace
- They are case sensitive, ie capitalization 
- They can’t be keyword names
- Strong Convention but not Required: start w/ a lowercase letter

<br/> 
<br/> 

**What about naming conventions? Are those enforced by the compiler/interpreter, or just standards in the community?** <br/>
In the dataTypesandNaming file in this folder, we go through the different naming conventions in C++ for primitive, derived, and abstract data types with examples. For a quick reference list, visit this link.
Naming conventions are not requirements, so they are not enforced by the compiler. However, it’s strongly recommended and considered good practice to stick to conventions for a multitude of reasons. Chiefly, sticking to naming conventions increases the readability of your code, as people know what to look for when identifying variable types. This, in turn, makes your code easier to maintain and collaborate on. <br>
Here’s a comparable metaphor: You could choose to author a book in conventional English, but you could author it in Pig Latin. Many fluent English speakers would still be able to read your book, but they’d probably be less willing to do so and may even plug it into a translator. And let’s say your Pig Latin conventions aren’t consistent, as is often the case when disregarding programming conventions. Now, your readers are more confused, as the same rules do not apply everywhere in your code.  

<br/> 
<br/> 

**[Extra] Does C++ have built in complex data types?** <br/>
C++ has a has a few complex data types that instantiate complex numbers. For an in-depth explanation of complex numbers check out [this]([url](https://www.geeksforgeeks.org/naming-convention-in-c/)) source. 
To summarize, complex numbers are the sum of real and imaginary numbers.  <br/>
I’ve inserted the complex data type instantiation format, sourced from the C++ documentation, below.
<br/>

`template< class T >
class complex;` <br/> 


`template<> class complex<float>;` <br/> 

`template<> class complex<double>;` <br/> 

`template<> class complex<long double>;` <br/> 

<br/>
<br/>

**Does C++ have keywords or reserved words? How many?** <br/>
As of 2-23, C++ has 95 keywords. Keywords are a type of token, “the smallest individual parts of a program” (GeeksforGeeks, 2023). Keywords are reserved words that have special purpose, meaning they cannot be used as identifier names. To recap, some examples of identifiers are variables, functions, classes, and arrays. 
Below is a list of common keywords and their definitions, sourcesd from [this](https://www.geeksforgeeks.org/cpp-keywords/) GeeksforGeeks article. (Note: A full list of citations can be in the bibliography file in this folder).

| Keyword | Description |
| ----------- | ----------- |
|asm| To declare that a block of code is to be passed to the assembler.
|auto| A storage class specifier that is used to define objects in a block.
|break| Terminates a switch statement or a loop.
|case| Used specifically within a switch statement to specify a match for the statement’s expression.
|catch| Specifies actions taken when an exception occurs.
|char| Fundamental data type that defines character objects.
|class| To declare a user-defined type that encapsulates data members and operations or member functions.
|const| To define objects whose value will not alter throughout the lifetime of program execution.
|continue|Transfers control to the start of a loop.
|default| Handles expression values in a switch statement that are not handled by case.
|delete| Memory deallocation operator.
|do| indicate the start of a do-while statement in which the sub-statement is executed repeatedly until the value of the expression is logical-false.
|double|  Fundamental data type used to define a floating-point number.
|else| Used specifically in an if-else statement.
|enum| To declare a user-defined enumeration data type.
|extern| An identifier specified as an extern has an external linkage to the block.
|float| Fundamental data type used to define a floating-point number.
|for| Indicates the start of a statement to achieve repetitive control.
|friend| A class or operation whose implementation can access the private data members of a class.
|goto| Transfer control to a specified label.
|if| Indicate the start of an if statement to achieve selective control.
|inline| A function specifier that indicates to the compiler that inline substitution of the function body is to be preferred to the usual function call implementation.
|int| Fundamental data type used to define integer objects.
|long| A data type modifier that defines a 32-bit int or an extended double.
|new| Memory allocation operator.
|operator| Overloads a c++ operator with a new declaration.
|private| Declares class members which are not visible outside the class.
|protected| Declares class members which are private except to derived classes
|public| Declares class members who are visible outside the class.
|register| A storage class specifier that is an auto specifier, but which also indicates to the compiler that an object will be frequently used and should therefore be kept in a register.
|return| Returns an object to a function’s caller.
|short| A data type modifier that defines a 16-bit int number.
|signed| A data type modifier that indicates an object’s sign is to be stored in the high-order bit.
|sizeof| Returns the size of an object in bytes.
|static| The lifetime of an object-defined static exists throughout the lifetime of program execution.
|struct| To declare new types that encapsulate both data and member functions.
|switch| This keyword is used in the “Switch statement”.
|template| parameterized or generic type.
|this| A class pointer points to an object or instance of the class.
|throw| Generate an exception.
|try| Indicates the start of a block of exception handlers.
|typedef| Synonym for another integral or user-defined type.
|union| Similar to a structure, struct, in that it can hold different types of data, but a union can hold only one of its members at a given time.
|unsigned| A data type modifier that indicates the high-order bit is to be used for an object.
|virtual| A function specifier that declares a member function of a class that will be redefined by a derived class.
|void| Absent of a type or function parameter list.
|volatile| Define an object which may vary in value in a way that is undetectable to the compiler.
|while| Start of a while statement and end of a do-while statement.
