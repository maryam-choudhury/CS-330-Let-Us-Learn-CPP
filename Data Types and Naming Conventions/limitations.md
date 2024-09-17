# Getting Into Limitations
If you have already run through the practice file for this section, you have probably realized the C++ is pretty strict about declaring variable types and adhering to them during operations. This helps with type-safety, otherwise known as preventing type errors, but also can be limiting. Below I will go through the situations encountered in the practice examples in further detail, so we can explore these limitations. 

## What Adding int and float Taught Us
When adding Ints and floats, C++ converts the int to a float before completing the operation. This concept is known as a widening conversion and ensures we are not losing precision. Since we are changing a variable into something increasingly specific, we are “widening”. An example of narrowing includes storing a double in an int variable; this is a loss of precision as the decimal values are dropped. This is also an example of implicit casting. 
<br>
<br>
Other combinations are less expected and less graceful, such as how adding a double and an int will result in a floating-point variable type. 

## What Instantiating array Taught Us
C++ enforces type homogeneity in arrays and vectors, which is a limitation languages such as Python and Java don’t have. This means that all variable types within these structures must be the same. If you want to put twp different variable tyes together in a similar fashion as with an array, you will have to resort to more complex structures, such as a struct or union. 

## Miscellaneous Pitfalls
[Automatic garbage collection](https://www.geeksforgeeks.org/garbage-collection-python/) refers to programming languages automatically eliminating objects that are no longer being referenced. C++ does not have this feature, so you have to be careful and manage memory resources with intention.
