# System Design for net salary calculator

## Input
1. **Full name**: string data type
2. **Base Salary**: double data type
3. **Weekly working hours**: double data type
4. **Bonus rate per hour**: double data type

## Output
1. **Net Salary**


## Operation
## Operation

1. **Multiplication**:
    1. **pension_deduction = 0.05 * base_salary**
    2. **extra_working-hours = working_hours-40**
    3. **bonus_per_month = bonus_rate_per_hour * extra_working_hours**
    5. **gross_salary = base_salary + bonus_per_month**
    5. **tax_deduction = gross_salary * 0.15**
    6. **net_salary = gross_salary - tax_deduction - pension_deduction**

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
12. Calculate `pension_deduction` as `0.05 * base_salary`.
13. If `weekly_working_hours` is greater than 40, calculate `extra_working_hours` as `weekly_working_hours - 40`, otherwise set `extra_working_hours` to 0.
14. Calculate `bonus_per_month` as `bonus_rate_per_hour * extra_working_hours`.
15. Calculate `gross_salary` as `base_salary + bonus_per_month`.
16. Calculate `tax_deduction` based on `gross_salary`:
    16.1 If `gross_salary` is up to 200, `tax_deduction` is `gross_salary * 0.10`.
    16.2 If `gross_salary` is between 200 and 600, `tax_deduction` is `gross_salary * 0.15`.
    16.3 If `gross_salary` is between 600 and 1200, `tax_deduction` is `gross_salary * 0.20`.
    16.4 If `gross_salary` is between 1200 and 2000, `tax_deduction` is `gross_salary * 0.25`.
    16.5 If `gross_salary` is between 2000 and 3500, `tax_deduction` is `gross_salary * 0.15`.
    16.6 If `gross_salary` is 3500 and above, `tax_deduction` is `gross_salary * 0.30`.
17. Calculate `net_salary` as `gross_salary - tax_deduction - pension_deduction`.
18. Print `net_salary`.
19. Stop the program.
