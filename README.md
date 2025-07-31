 Experiment: Basic Operations on Arrays and Strings in C++

 ✅ Aim

To write C++ programs that perform basic operations on:

🔸 Arrays:
- Input and output of array elements  
- Searching for an element  
- Reversing the array  
- Calculating the sum and average  
- Finding the minimum and maximum elements  

🔸 Strings:
- Input and display of string  
- Concatenation of strings  
- Reversing a string  
- Checking for palindrome  

 📚 Theory:
 
 Arrays:
Arrays are linear data structures that store multiple values of the same type in contiguous memory locations. They allow **indexed access**, making operations like traversal, search, and updates fast and efficient.In this experiment, we practiced common array manipulations using loops, conditional logic, and arithmetic operations.
 Strings:
Strings in C++ can be handled using character arrays (`char[]`) or the `string` class from the STL (Standard Template Library). The `string` class provides built-in functions for concatenation, length checking, character access, and more.These operations are crucial in text processing, data parsing, and solving problems related to pattern matching or manipulation.

🧠 Algorithms Used

 ✅ Arrays

🔹 **Input & Output**  
- Use `for` loop and `cin` to input array elements & Use another loop to print elements using `cout`  
🔹 **Search Element**  
- Input target value & Loop through array using **linear search** to check if the element exists  
🔹 **Reverse Array**  
- Loop from last index to first and print elements in reverse order

  🔹 **Sum & Average**  
- Initialize `sum = 0` . Add all elements using a loop & Divide by number of elements to get average  

🔹 **Min & Max Finder**  
- Set `min = arr[0]`, `max = arr[0]` . Loop through array and update `min` or `max` when smaller/larger value is found  

 ✅ Strings

🔹 **Input & Output**  
- Use `cin` or `getline()` to take string input & Print using `cout`  
🔹 **Concatenation**  
- Use `+` operator or `.append()` method to join two strings  
🔹 **Reversing a String**  
- Loop from end to start, or use `reverse(str.begin(), str.end())` (STL)  
🔹 **Palindrome Check**  
- Compare characters from both ends moving inward  * If all matching, it's a palindrome.

  📝 Conclusion

This experiment strengthened my understanding of both **arrays** and **strings** — two of the most important building blocks in programming. I learned how to use **loops**, **conditions**, and **basic functions** to solve problems like:

- Searching and reversing data  
- Performing mathematical calculations on array values  
- Manipulating text through string operations  
