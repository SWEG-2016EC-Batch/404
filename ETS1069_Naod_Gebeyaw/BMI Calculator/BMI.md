# System Design for BMI Calculator

## Input
1. **Number of Persons(trial)**: Integer data type
2. **Weight**: data type of float
3. **Height**: data type of float
 
## Output
1. **BMI of Persons**
2. **BMI catagory of persons**

## Operation
1. **Iteration**: Use a `for` loop to process each person.
2. **Selection Statement**: Use multi-conditional statements to determine BMI catagory of each person.
3. **Multiplication**: weight/height*height

## Pseudo Code
1. Start the program.
2. Declare `trial` using `int` data type.
3. Declare `weight`, `height`, `BMI` using `float` data type.
4. Prompt the user to enter the number of persons to be calculated for their BMI.
5. Take the number of persons input and store it in the `trial` variable.
6. Validate the input; if it is invalid, terminate the program, otherwise go to the next step.
7. Initialize `i` to 1.
8. Check if `i` is less than or equals to `trial`; if true, proceed to step 8.1, otherwise go to step 9.
    8.1. Prompt the user to enter their weight (kg) and store it in the `weight` variable.
    8.2. check if the the weight is valid and check if its positive number.
    8.3. Prompt the user to enter their height (m) and store it in the `height` variable. 
    8.4. check if the the 'height' is valid and check if its positive number.
    8.5. Calculate the BMI as `weight / (height * height)` and store it in the `BMI` variable.
    8.6. Print the BMI of the person.
    8.7. If `bmi` is less than 18.5, print "Underweight", otherwise go to step 8.8.
    8.8. else If `bmi < 25 and bmi > 18.5`, print "Normal weight", otherwise go to step 8.9.
    8.9. If `bmi >= 25`, print "Overweight", otherwise.
    8.11. Increment `i` by 1.
    8.12. Go to step 8 as long as i <= trial.
10. Stop the program.

## Flow chart
![Flowchart]()
