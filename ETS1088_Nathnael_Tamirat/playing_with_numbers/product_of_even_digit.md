# System Design for product_of_even_digit

## Input
1. **number**

## Output
1. **prodcut of even digit**

## Operation
1. **Iteration**: for loop
2. **Intialization**: prod -> 0  int data type  
                      


## Pseudo Code
1. Start the program.
2. Initialize prod to 1 and declare original_number, and value with data type int.
3. Take input and store it on original_number
4. if original_number different from 0 go to step 4.1 else go to step 5
    4.1 value -> reverse_number %10;
    4.2 if value %2 == 0 go to step 4.2.1 else go to step 4.3
        4.2.1 prod = prod *value
        4.2.2 go to step 4.3
    4.3 divide original number by 10 and put it in original number
    4.4 go to step 4
5. print the product of digit
6. stop the program

