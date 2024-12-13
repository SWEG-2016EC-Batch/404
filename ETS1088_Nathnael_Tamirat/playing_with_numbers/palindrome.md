# System Design for palindrome

## Input
1. **number**
2. **string library**

## Output
1. **palindrome or not**

## Operation
2. **data casting**: string to integers and integers to string           


## Pseudo Code
1. Start the program.
2. Take input and store it on num(int)
3. cast num to string new_num and put in new intialized new_num(string) 
4. intialize l to 0 and to r to length of new num and -1.
5. if l < r go to step 5.1 else go to step 6
    5.1 if the index of new_num with l and r are equal go to step 5.2 else go to step 5.1.1
        5.1.1 print not palindrome
        5.1.2 stop the program
    5.2 increment l by 1 and decrement r by 1
    5.3 go to step 5
6. print palindrome
8. stop the program

