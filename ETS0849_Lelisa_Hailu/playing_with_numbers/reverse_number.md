Algorithm Design for reverse_number
Input
number

Output
reverse number

Operation
Iteration: for loop
Intialization: reverse_number -> 0 int data type


Pseudo Code
1.Start the program.
2.Initialize reverse_number to 0 and declare original_number with data type int.
3.Take input and store it on original_number
4.if original_number different from 0 go to step 4.1 else go to step 5 4.1 reverse_number -> reverse_number * 10 + (original_number%10) 4.2 divide original number by 10 and put it in original number 4.3 go to step 4
5.print the reversed number
6.stop the program