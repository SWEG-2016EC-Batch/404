
# BMI Calculator System Design

## 1. Input Handling
- Accepts user input for height and weight.
- Validates inputs to ensure they are positive numbers.

## 2. BMI Calculation
- Computes BMI using the formula: 
  [
  BMI=weight/(height*height)]

## 3. Output
- Displays the calculated BMI.
- Provides feedback on weight category based on BMI value.

## 4. Loop Control
- Offers the user an option to continue or terminate the program after each calculation.

# BMI Calculator Pseudocode

## Start

DECLARE BMI, weight, height, cont AS FLOAT

PRINT "This is a Body Mass Index (BMI) calculator"

WHILE TRUE DO
    PRINT "Please enter your height in meters:"
    INPUT height
    
    IF input is invalid OR height <= 0 THEN
        PRINT "Invalid input!"
        CLEAR input
        CONTINUE to next iteration
    
    PRINT "Please enter your weight in kilograms:"
    INPUT weight
    
    IF input is invalid OR weight <= 0 THEN
        PRINT "Invalid input!"
        CLEAR input
        CONTINUE to next iteration
    
    BMI = weight / (height * height)
    
    PRINT "Your BMI is " + BMI + "."
    
    IF BMI < 18.5 THEN
        PRINT "You are underweight!"
    ELSE IF BMI >= 18.5 AND BMI <= 24.9 THEN
        PRINT "You are in a healthy weight range!"
    ELSE IF BMI >= 25 AND BMI <= 29.9 THEN
        PRINT "You are in overweight range!"
    ELSE
        PRINT "You are in obesity state!"
    
    PRINT "If you want to terminate the calculator enter 0 and if you want to continue enter any other digit except 0."
    INPUT cont
    
    IF input is invalid THEN
        CLEAR input
        CONTINUE to next iteration
    ELSE IF cont == 0 THEN
        PRINT "Thank you for using my BMI calculator."
        BREAK from loop

END WHILE

RETURN 0


