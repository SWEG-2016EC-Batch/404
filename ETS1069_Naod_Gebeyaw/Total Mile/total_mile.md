# System Design for Automobile Fuel Calculator

## Input
1. **Fuel tank capacity:** as a float data type (gallons)
2. **Fuel efficiency:** as a float data type (miles per gallon)

## Output
1. **Total miles the automobile can travel without refueling:** as a float data type (miles)

## Operation
1. **Multiplication:** To calculate the total miles by multiplying the fuel tank capacity with the fuel efficiency.

## Pseudo Code
1. Start the program.
2. Declare a variable called `tank_capacity`, `miles_per_gallon`, and `total_miles`.
3. Prompt the user to input the fuel tank capacity and store it in the `tank_capacity` variable.
4. If the input fails (non-numeric input), print out "ERROR! Invalid input for tank capacity." and terminate the program.
5. Prompt the user to input the fuel efficiency in miles per gallon and store it in the `miles_per_gallon` variable.
6. If the input fails (non-numeric input), print out "ERROR! Invalid input for miles per gallon." and terminate the program.
7. Calculate the total miles as `total_miles = tank_capacity * miles_per_gallon`.
8. Print out the result: "The automobile can be driven `total_miles` miles without refueling."
9. End the program.

## Flow Chart
![Flowchart]()

