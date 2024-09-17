# (Some of) The Many Classifications of Programming Languages, And Where C++ Finds Footing <br>

Let’s talk about typing. Programmers use language such as static VS dynamic, strong VS weak, and implicit VS explicit to describe the nature of different languages so that they can be better compared to each other. When learning a language, it can be helpful to learn which of these titles are associated with it, so that you can understand how the type errors can be prevented and corrected given the restrictions of the language. However, definitions are not always agreed upon or clear cut, so it is important to never take a claim at face value.

## Static vs Dynamically Typed
### Statically Typed Languages
The most relevant feature of a statically-typed language is that type checking is performed at compile time. In line with this characteristic, the compiler will verify that all variables are assigned a type, and that all operations are type appropriate, but the code even runs. Such ‘mismatch’ type errors must be resolved before the program can successfully compile. If you consider this compilation style a safety-net, you are probably a pro-static type. If you find it cumbersome, you may prefer dynamically typed languages.

### Dynamically Typed Languages
Dynamically typed languages feature a compiler that assigns types to all variables at runtime, based on their run-time values rather than named variables/fields. This flexibility can on one hand lead to faster development  as you don’t need explicit type declarations, but on the other hand cause bugs that only reveal themselves after your program has started running.  


## Strong-Type vs Weak-Type
These terms have a less straightforward distinction, as programming communities use them inconsistently. Generally, however, the classification is dependent on how strictly a language enforces type rules.

### Strongly Typed Languages
In strongly-typed languages, variable and value types are strongly enforced. THis means that when you have two ‘incompatible’ types, operations between the two are not allowed without, with some exceptions, explicit conversions. This ensures unexpected type conversions do not occur. An example of a perhaps familiar valid conversion method is concatenation of an int and string in Java.

### Weakly Typed Languages
Implicit type conversions are more common in weak-typed programming languages, explaining why these languages are colloquially called weak in comparison to the explicit conversion heavy strong-typed counterparts. This may help write shorter programs, but can also lead to unexpected results as variables are automatically cast to different types. 

## Explicitly Typed vs Implicitly-Typed Languages
Turns out the last section gave you a sneak peak for this one! This classification refers to how variables are assigned types in a program.

### Explicitly Typed Languages:
In explicitly-typed languages the type of each variable must be associated with a specific variable type at declaration.

### Implicitly Typed Languages:
In such languages the compiler infers the variable type based on the value assigned to it. As mentioned before, this style is typically seen in dynamically typed programming languages. However, keep in mind that some statically-typed languages support type inference.

## How Does C++ Fit Into All This?
C++ is a statically-typed programming language. The compiler checks type declarations and compatibility before executing the code. This minimizes runtime errors and improves the performance of the program, as the type does not need to be determined while it is executing.
<br>
<br>
A lot of people consider C++ to be a strong-typed language, as it strictly enforces type-rules. However, C++ is an example of a programming language that supports some implicit type conversions such as int-float and pointer casting (see the dataTypesandNaming file). C++’s flexibility in handling implicit type conversions and points have led dome programmers to call it a weakly typed programming language. Overall though, most agree that it leans towards strong typic due to its pickiness with type rules. 
<br>
<br>
This next one follows the same trail of thought. C++ is traditionally an explicitly-typed language, with its strong variable declaration rules. However, type inference, also known as type conversion, is allowed on modern versions of the program, through the ‘auto’ keyword. So, at the programmers discretion, one can turn the traditionally explicit language into a blend between explicit and implicit typing. 
