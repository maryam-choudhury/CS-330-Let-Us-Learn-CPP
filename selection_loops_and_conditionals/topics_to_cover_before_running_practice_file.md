
# Before Running the Practice File...
Let's review key concepts that will be demonstatrated in the code, in a question-answer style format! The examples cited come dirrectly from the practice file unless otherwise specified. If you are having trouble discerning the reasoning behind certain sections of code based on the inline comments alone, please refer back to this file!
### Boolean Values in C++
What are the boolean values in C++?
- In C++, boolean values are represented as `true` and `false`.
- You may be familiar with 0 being considered 'false' and 1 being considered 'true' in other programming languages. C++ takes this a step further: any non-zero integer value is considered `true`, while `0` is considered `false`.
  
  ```cpp
  int x = 5;

  if (x == true) {
      cout << "x is true (non-zero)" << endl;
  } else {
      cout << "x is false (zero)" << endl;
  }
  ```

---

### Conditional Statements in C++
What types of conditional statements are available in C++?  (if/else, if/then/else, if/elseif/else). <br>
Does your C++ allow for statements other than “if” (for example, Perl has an “unless” statement, which does the opposite of “if”!) <br>
- **If/Else Statements**: C++ supports conditional code execution with simple `if` and `if/else` structures.
  
  ```cpp
  if (x > 0) {
      cout << "x is positive" << endl;
  } else {
      cout << "x is non-positive" << endl;
  }
  ```

- **If/Else If/Else Statements**: You can also use else-if to string/chain multiple conditions together. 
  ```cpp
  int z = 15;

  if (z < 10) {
      cout << "z is less than 10" << endl;
  } else if (z == 15) {
      cout << "z is exactly 15" << endl;
  } else {
      cout << "z is greater than 10 and not 15" << endl;
  }
  ```

- **No "unless" Statement**: Unlike Perl, C++ does not have an "unless" statement, but you can achieve similar results by negating a condition.
- ```cpp
  #include <iostream>
  // This example is not included in the practice file.
  int main() {
      int x = 5;
  
      if (!(x > 10)) { 
          std::cout << "x is not greater than 10" << std::endl;
      }
  
      return 0;
  }

  ```

---

### Delimiting Code Blocks in C++
How does C++ delimit code blocks under each condition in selection control statements?
- In C++, code blocks under each conditional statement (an easier way to phrase 'under each condition in selection control statements') are delimited by curly braces `{}`.
- Technically,if your conditional has only one statement, the braces can be omitted, but I would recommend getting into the haabit of leaving them in to avoid logical errors.
- (Remember to check the bibliography for my sources/additional learning resources!)

  ```cpp
  if (x > 0) {
      cout << "x is positive" << endl;
  } else {
      cout << "x is non-positive" << endl;
  }
  ```

---

### Short-Circuit Evaluation in C++
DOes C++ use short-circuit evaluation? Can you include an example of the short-circuit logic working or not working (or both, if it's like Java and supports both!)
- C++ supports **short-circuit evaluation** in logical conditions. This means if you can determine the result of the condition based on the first operand,the second operand is not evaluated. The condition 'short-circuits'!
- Example of short-circuiting from the practice file. Our goal is to avoid division by zero:

  ```cpp
  int a = 0, b = 10;

  if (a != 0 && b / a > 2) { // a != 0 short-circuits the division
      cout << "This won't print, because a is zero" << endl;
  } else {
      cout << "Short-circuited: a is zero, division by zero was avoided!" << endl;
  }
  ```

---

### Dangling Else Problem in C++
How does C++ deal with the “dangling else” problem?
- First off, let's clarify what the 'dangling else' problem is. In simple terms, it is when your nested if statments are formatted in such a way that it is not clear, even to the parser, which "if"s combine with which "else"s.
- C++ resolves the **dangling else** problem by associating the dangling `else` with the nearest unmatched `if`.
- To avoid this issue all together, try to keep your code clean! Using braces `{}` to group `if` statements keeps things clean and enhances readability.

  ```cpp
  // This example in not included in the practice code file!
  if (x > 0) {
      if (y > 0) {
          cout << "Both x and y are positive" << endl;
      }
  } else {
      cout << "Either x or y is non-positive" << endl;
  }
  ```

---

### Switch-Case Statements in C++
If C++ supports switch or case statements, do you have to use “break” to get out of them?  Can you use “continue” to have all of the conditions evaluated?
- C++ does support **switch-case** statements for [multi-way branching](https://www.geeksforgeeks.org/nested-switch-statement-in-c/).
- You need to use `break` to exit a case block, or execution will ["fall through"](https://www.geeksforgeeks.org/fallthrough-in-c/) to the next line, aka the susequent case.
- In this case 'falling through' means that the flow of program control has jumped to the next line, instead of neatly exiting the swtich statment. The FOPC will continue to fall thru cases until it eventurally reaches a break.
  
  ```cpp
  int day = 3;

  switch (day) {
      case 1:
          cout << "It's Monday" << endl;
          break;
      case 2:
          cout << "It's Tuesday" << endl;
          break;
      case 3:
          cout << "It's Wednesday" << endl;
          break;
      default:
          cout << "It's the weekend!" << endl;
          break;
  }
  ```

- **Continue not supported**: C++ does not support using `continue` with switch-cases. Once a `case` block in your switch-case is executed, you need to use `break` to prevent fall-through, as just mentioned above! <br> <br> If you think about it, it wouldn't logically make sense: the purpose of a switch statement is selecting one option of many based on meeting a condition. 'continue' is used to skip the remaining statments in the loop and move on to the next iteration. They serve different purposes. <br> <br>
You can however use continue in loops. To learn more about the continue statement, visit [this](https://algocademy.com/link/?problem=continue-in-for-loops&lang=cpp&solution=1) page. More resources are listed in the bibliography!

---
```
