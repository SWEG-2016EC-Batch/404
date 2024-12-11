# System Design for Net-pay Calculation

## Input
1. **Basic Salary**: Float data type
2. **Worked Hours**: Float data type
3. **Bonus Rate**: Float data type
4. **Overtime Bonus Rate**: Float data type (optional, based on worked hours)

## Output
1. **Bonus of the Employee**
2. **Gross Salary of the Employee**
3. **Pension Deduction**
4. **Tax Deduction**
5. **Net Pay of the Employee**

## Operations
1. **Addition**
2. **selection**
## Pseudocode
1. Start the program.
2. Declare `basic_salary`, `worked_hour`, `bonus_rate`, `over_time_bonus_rate` as `float` data types.
3. Declare `gross_salary`, `tax_rate`, `bonus`, `pention`, `tax`, and `net_pay` as `float` data types.
4. Prompt the user to enter the basic salary and store it in the `basic_salary` variable.
5. Prompt the user to enter the number of worked hours and store it in the `worked_hour` variable.
6. Prompt the user to enter the bonus rate and store it in the `bonus_rate` variable.
7. Check if the `worked_hour` exceeds 40; if true, prompt the user to enter the overtime bonus rate and store it in the `over_time_bonus_rate` variable.
8. Use an `if-else` statement to determine the tax rate based on `basic_salary`:
    8.1 If `basic_salary` <= 200, set `tax_rate = 1`.
    8.2 Else If `basic_salary` <= 600, set `tax_rate = 0.01`.
    8.3 Else If `basic_salary` <= 1200, set `tax_rate = 0.15`.
    8.4 Else If `basic_salary` <= 2000, set `tax_rate = 0.2`.
    8.5 Else If `basic_salary` <= 3500, set `tax_rate = 0.25`.
    8.6 Else, set `tax_rate = 0.3`.
9. Calculate the bonus as `bonus = over_time_bonus_rate * bonus_rate`.
10. Calculate the gross salary as `gross_salary = basic_salary + bonus`.
11. Calculate the pension as `pention = basic_salary * 0.07`.
12. Calculate the tax as `tax = gross_salary * tax_rate`.
13. Calculate the net pay as `net_pay = gross_salary - pention - tax`.
14. Display the calculated bonus, gross salary, pension, tax, and net pay.
15. End the program.

