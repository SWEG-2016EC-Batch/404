## **QUESTION**
Write a program that Prints the reverses of the number (e.g. input = 4637215 Output=5217364).
## **PROBLEM ANALYSIS**
#### **Input**:-
1. An integer
#### **Output**:-
1. Reverse of that integer
#### **Operation**:-
1.  while the number is not 0:</br>
    1.1.Extract the last digit of number using number % 10.</br>
    1.2.Add this digit to reverse after multiplying reverse by 10 to shift its digits.</br>
    1.3. Remove the last digit from number using integer division (number / 10).</br>
    1.4. Output reverse, which now holds the reversed digits.</br>
## **PSEUDOCODE**
1. Start the program
2. Read a number
3. While the number is not 0:</br>
    3.1.Extract the last digit of number using number % 10.</br>
    3.2.Add this digit to reverse after multiplying reverse by 10 to shift its digits.</br>
    3.3. Remove the last digit from number using integer division (number / 10).</br>
    3.4. Output reverse, which now holds the reversed digits.
4. Stop the program
## **FLOWCHART**
```mermaid
flowchart TD
    A[Start] --> B[Initialize reverse = 0]
    B --> C[Display:Enter a number to reverse]
    C --> D[Read number]
    D --> E{Is number != 0?}
    E -->|Yes| F[Extract last digit: digit = number % 10]
    F --> G[Update reverse: reverse = reverse * 10 + digit]
    G --> H[Remove last digit: number = number / 10]
    H --> E
    E -->|No| I[Display reverse]
    I --> J[End]

```
