


# BMI Calculator System Design

## Input 
- Accepts user input for height and weight.
- Validates inputs to ensure they are positive numbers.

## BMI Calculation
- Computes BMI using the formula: 
  [
  BMI=weight/(height*height)]

## Output
- Displays the calculated BMI.
- Provides feedback on weight category based on BMI value.

## Loop 
- Offers the user an option to continue or terminate the program after each calculation.




# BMI Calculator Pseudocode

## Start the program

**Step 1:** declare BMI,weight,height,cont using float data_type.

**Step 2:** Print "This is a Body Mass Index (BMI) calculator"

**Step 3:** Read height in meters into height

**Step 4:** Read weight in kilograms into weight

**Step 5:** Calculate BMI = weight / (height * height)

**Step 6:** Print "Your BMI is " + BMI + "."

**Step 7:** If BMI < 18.5 THEN
   - Print "You are underweight!"
   
**Step 8:** Else if 18.5<= BMI <= 24.9 THEN
   - Print "You are in a healthy weight range!"
   
**Step 9:** Else if 25<= BMI <= 29.9 THEN
   - Print "You are in overweight range!"
   
**Step 10:** Else
   - Print "You are in obesity state!"

**Step 11:** Print "Do you want to calculate again? (Enter 0 to quit, any other number to continue)"

**Step 12:** Read input for continuation into cont

**Step 13:** If cont == 0 THEN
   - Print "Thank you for using my BMI calculator."
   - Break from the loop

## End the program



# Flow chart
![Flowchart](bmi_flowchart.png)
