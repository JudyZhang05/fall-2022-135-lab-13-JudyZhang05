#include <iostream>
#include "funcs.h"

int main(){
    //TASK A
    std::cout << "\n\nTask A. Print all numbers in range\n";
    std::string temp = "\t";
    printRange(-2, 10, temp);
    std::cout << "\n\n";

    //TASK B
    std::cout << "Task B. Sum of numbers in range\n";
    int x = sumRange(1,3);
    printRange(1, 3, temp);
    std::cout << "\nThis is " << x << std::endl;
    int y = sumRange(-2,10);
    printRange(-2, 10, temp);
    std::cout << "\nThis is " << y << std::endl;

    //TASK C
    std::cout << "\nTask C. Sum of elements in array\n";
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34

    delete[] arr;         // deallocate it

    //TASK D
    std::cout << "\nTask D. Is string alphanumeric?\n";
    std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
    std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)

    //TASK E
    std::cout << "\nTask E (Bonus). Nested parentheses\n";
    std::cout << nestedParens("((()))") << std::endl;      // true (1)
    std::cout << nestedParens("()") << std::endl;          // true (1)
    std::cout << nestedParens("") << std::endl;            // true (1)

    std::cout << nestedParens("(((") << std::endl;         // false (0)
    std::cout << nestedParens("(()") << std::endl;         // false (0)
    std::cout << nestedParens(")(") << std::endl;          // false (0)
    std::cout << nestedParens("a(b)c") << std::endl;       // false (0)
    std::cout << "\n\n";

    return 0;
}