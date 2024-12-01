# system design for salary calculator

## input
1. **Name: as a string data type**
2. **weekly working hour, bonus rate, base salary: as float data type**

## output
1. **bonus, gross salary, net salary**

## operation
1. **Addition**
2. **Multiplication**

## pseudo code
1. start the program.
2. declare a variable called `weekly_working_hour`,`bonus_rate` and  `base_salary `.
3. declare and initialize a constant variable called `pention_rate`.
4. prompt the user to write their name and store it on the `name` variable.
5. prompt the user to input their weekly working hour and store it.
6. if the input fails, print out "error! invalid input".
7. prompt the user to input their bonus rate per hour and store it.
8. if the input fails, print out "error! invalid input".
9. prompt the user to input their base salary and store it.
10. if the input fails, print out "error! invalid input".
11. decalre and initialize a variable called `bonus` then calculate it as "bonus_rate * weekly_woring_hour".
12. decalre and initialize a variable called `gross_salary` then calculate it as "base_salary + bonus".
13. decalre and initialize a variable called `pension_deduction` then calculate it as "gross_salary * tax".
14. decalre and initialize a variable called `bonus` then calculate it as "bonus_rate * weekly_woring_hour".
15. decalre and initialize a variable called `tax_deduction` then calculate it as "gross_salary * tax".
16. decalre and initialize a variable called `net_salary` then calculate it as "gross_salary - (pension_deduction + tax_deduction)".
17. print out `bonus`.
18. print out `gross salary`.
19. print out `net salary`.
20. stop the program.

## Flow chart
![Flowchart]()


   
