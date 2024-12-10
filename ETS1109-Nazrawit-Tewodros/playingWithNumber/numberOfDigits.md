## **QUESTION**:-
write a program that counts the number of digits in a given number (e.g. 23,498 has five digits)
## **PROBLEM ANALYSIS**:-
#### **Input**:- 
1. Integer
#### **Output**:-
1. Number of digits of the number
#### **Operation**:-
1.  Divide the number by 10 repeatedly until it becomes 0, incrementing a counter each time.
## **PSEUDOCODE**
1. start the program
2. read an integer
3.  Divide the number by 10 repeatedly until it becomes 0, incrementing a counter each time.
4.  stop the program
## **FLOWCHART**
```mermaid
flowchart TD
    A[Start] --> B[Initialize count = 0]
    B --> C[Display Enter a number]
    C --> D[Read number]
    D --> E[Set originalNumber = number]
    E --> F{Is number != 0?}
    F -->|Yes| G[Divide number by 10: number = number / 10]
    G --> H[Increment count by 1]
    H --> F
    F -->|No| I[Display originalNumber and count]
    I --> J[End]
```
