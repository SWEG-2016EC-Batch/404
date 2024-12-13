## **QUESTION**
Write a program that accepts an integer from the user and perform the following. Once
you complete solving all the exercises compile it and prepare a menu.</br>
a) Prints the reverses of the number (e.g. input = 4637215 Output=5217364).</br>
b) Counts the number of digits in a given number (e.g. 23,498 has five digits)</br>
c) Find the product of even digits of the a given number (e.g. input=4,923 prod=8)</br>
d) Prints the first and the last digit of the number and find their sum.</br>
e) Swap the first and the last digit of the number.</br>
g) Check whether a number is palindrome or not.</br>
h) Find the frequency of each digit in a given integer and print in table format.</br>
i) Check if a number is Strong or not.</br>
[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal to the
number itself.</br>
j) Check whether a number is Perfect number or not.</br>
[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number itself
equals the number.</br>
## **PROBLEM ANALYSIS**
#### **Input**:-
1. Choice for operation.
2. An Integer number to be operated on.
#### **Output**:-
1. validation statements or results depending on teh choice for operation
## **PSEUDOCODE**
**Start**

1. **Display Menu**:  
   - Print the following options:  
     - "1. Reverse the number"  
     - "2. Count the number of digits"  
     - "3. Product of even digits"  
     - "4. First and last digit and their sum"  
     - "5. Swap first and last digit"  
     - "6. Check if palindrome"  
     - "7. Frequency of each digit"  
     - "8. Check if Strong number"  
     - "9. Check if Perfect number"  
     - "0. Exit"  

2. **Repeat until the user chooses to exit**:  
   - Prompt the user to enter their choice.  
   - If the choice is `0`:  
     - Print "Exiting the program."  
     - Exit the loop.  

3. **For each choice, perform the corresponding operation**:  

---

### 1. **Reverse the Number**  
- Prompt the user to enter an integer `num`.  
- Convert `num` to a string.  
- Reverse the string.  
- Convert the reversed string back to an integer.  
- Print the reversed number.  

---

### 2. **Count the Number of Digits**  
- Prompt the user to enter an integer `num`.  
- Convert `num` to a string.  
- Count the length of the string.  
- Print the length as the number of digits.  

---

### 3. **Product of Even Digits**  
- Prompt the user to enter an integer `num`.  
- Set `product` to 1.  
- Set `foundEven` to `false`.  
- For each digit in `num`:  
  - If the digit is even:  
    - Multiply `product` by the digit.  
    - Set `foundEven` to `true`.  
- If `foundEven` is `false`:  
  - Print 0.  
- Otherwise:  
  - Print `product`.  

---

### 4. **First and Last Digit and Their Sum**  
- Prompt the user to enter an integer `num`.  
- Convert `num` to a string.  
- Set `firstDigit` to the first character of the string.  
- Set `lastDigit` to the last character of the string.  
- Convert `firstDigit` and `lastDigit` to integers.  
- Calculate `sum` as `firstDigit` + `lastDigit`.  
- Print `firstDigit`, `lastDigit`, and `sum`.  

---

### 5. **Swap First and Last Digit**  
- Prompt the user to enter an integer `num`.  
- Convert `num` to a string.  
- If the length of the string is 1:  
  - Print `num`.  
- Otherwise:  
  - Swap the first and last characters.  
  - Concatenate the swapped characters with the middle characters.  
  - Convert the result back to an integer.  
  - Print the swapped number.  

---

### 6. **Check if Palindrome**  
- Prompt the user to enter an integer `num`.  
- Convert `num` to a string.  
- Compare the string with its reversed version.  
- If they are equal:  
  - Print "The number is a Palindrome."  
- Otherwise:  
  - Print "The number is NOT a Palindrome."  

---

### 7. **Frequency of Each Digit**  
- Prompt the user to enter an integer `num`.  
- Create an array `frequency` of size 10, initialized to 0.  
- For each digit in `num`:  
  - Convert the digit to an integer.  
  - Increment `frequency[digit]` by 1.  
- For each `i` from 0 to 9:  
  - Print "Digit `i`: `frequency[i]`".  

---

### 8. **Check if Strong Number**  
- Prompt the user to enter an integer `num`.  
- Set `sum` to 0.  
- For each digit in `num`:  
  - Convert the digit to an integer.  
  - Set `factorial` to 1.  
  - For each `i` from 1 to the digit:  
    - Multiply `factorial` by `i`.  
  - Add `factorial` to `sum`.  
- If `sum` equals `num`:  
  - Print "The number is a Strong Number."  
- Otherwise:  
  - Print "The number is NOT a Strong Number."  

---

### 9. **Check if Perfect Number**  
- Prompt the user to enter an integer `num`.  
- Set `sumOfDivisors` to 0.  
- For each `i` from 1 to `num - 1`:  
  - If `num` is divisible by `i`:  
    - Add `i` to `sumOfDivisors`.  
- If `sumOfDivisors` equals `num`:  
  - Print "The number is a Perfect Number."  
- Otherwise:  
  - Print "The number is NOT a Perfect Number."  

---

**End**
