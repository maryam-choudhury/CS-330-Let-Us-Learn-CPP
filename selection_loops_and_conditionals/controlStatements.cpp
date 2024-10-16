#include <iostream>
using namespace std;

int main() {
    // One-condition if/else statement
    // In this section we are checking to see if x is true/false (zero/non-zero)
    // We use the condition x==true to test this
    cout << "=== One-condition if/else statement ===" << endl;
    int x = 5;

    if (x == true) {
        cout << "x is true (non-zero)" << endl;
    } else {
        cout << "x is false (zero)" << endl;
    }

    // Multi-condition if/else statement
    // In this section we check to see if two conditions are true using &&
    // Both conditions must be ture in order for the code inside the if block to execute
    // Else, the code inside the else block is executed!
    cout << "\n=== Multi-condition if/else statement ===" << endl;
    int y = 8;

    if (x > 0 && y < 10) {
        cout << "x is positive and y is less than 10" << endl;
    } else {
        cout << "Condition not met" << endl;
    }

    // if/elif/else statements
    cout << "\n=== if/elif/else statements ===" << endl;
    int z = 15;

    if (z < 10) {
        cout << "z is less than 10" << endl;
    } else if (z == 15) {
        cout << "z is exactly 15" << endl;
    } else {
        cout << "z is greater than 10 and not 15" << endl;
    }

    // Short-circuit logic
    cout << "\n=== Short-circuit logic ===" << endl;
    int a = 0, b = 10;

    // Only checks the second condition if the first is true
    if (a != 0 && b / a > 2) { // a != 0 will short-circuit the division, bc that it, our first statment, is true!
        cout << "This won't print, because a is zero" << endl;
    } else {
        cout << "Short-circuited: a is zero, division by zero avoided!" << endl;
    }

    // switch-case statement
    // This example of a switch statement looks at the int day value and executed the corresponding case.
    // If no case matches, the default case runs
    cout << "\n=== switch-case statement ===" << endl;
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
        case 4:
            cout << "It's Thursday" << endl;
            break;
        case 5:
            cout << "It's Friday" << endl;
            break;
        default:
            cout << "It's the weekend!" << endl;
            break;
    }

    return 0;
}
