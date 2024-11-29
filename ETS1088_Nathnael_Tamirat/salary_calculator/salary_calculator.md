# System Design for bonus, net and gross salary calculator

## Input
1. **Full name**: string data type
2. **Base Salary**: double data type
3. **Weekly working hours**: double data type
4. **Bonus rate per hour**: double data type

## Output
1. **Net Salary**
2. **Gross Salary** 
3. **Bonus Payment**

## Operation
## Operation

1. **Multiplication**:
    1. **pension_deduction = 0.05 * base_salary**
    2. **bonus_per_month = bonus_rate_per_hour * (weekly_working_hours * 4)**
    3. **gross_salary = base_salary + bonus_per_month**
    4. **tax_deduction = gross_salary * 0.15**
    5. **net_salary = gross_salary - tax_deduction - pension_deduction**

## Pseudo Code
1. Start the program.
2. Declare `base_salary`, `pension_deduction`, `gross_salary`, `bonus_per_month`, `tax_deduction`, `net_salary` using `double` data type.
3. Declare `full_name` using `string` data type.
4. Prompt the user to enter `full_name` and put it in `full_name` variable.
5. Validate the input; if it is invalid, terminate the program, otherwise proceed to step 6.
6. Prompt the user to enter `base_salary` and put it in `base_salary` variable.
7. Validate the input; if it is invalid, terminate the program, otherwise proceed to step 8.
8. Prompt the user to enter `weekly working hours` and put it in `weekly_working_hours` variable.
9. Validate the input; if it is invalid, terminate the program, otherwise proceed to step 10.
10. Prompt the user to enter `bonus rate per hour` and put it in `bonus_rate_per_hour` variable.
11. Validate the input; if it is invalid, terminate the program, otherwise proceed to step 12.
12. Do operation `0.05 * base_salary` and put it in `pension_deduction`.
13. Do operation `bonus_rate_per_hour * (weekly_working_hours * 4)` and put it in `bonus_per_month`.
14. Do operation `base_salary + bonus_per_month` and put it in `gross_salary`.
15. Do operation `gross_salary * 0.15` and put it in `tax_deduction`.
16. Do operation `gross_salary - tax_deduction - pension_deduction` and put it in `net_salary`.
17. Print Net salary with descriptive message.
18. Print Gross salary with descriptive message.
19. Print bonus payment of month with descriptive message.
20. Stop the program.

## Flow chart
![Flowchart](Flowchart.png)