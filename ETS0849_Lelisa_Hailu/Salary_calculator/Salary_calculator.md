Algorithm Design for salary calculation 

Input 
Base_salary : string data type
bonus_rate_per_hour :double data type
weekly_working_hours: double data type

Processing 
Calcute Net salary by operating as :
pension_deduction = 0.05 * base_salary
bonus_per_month = bonus_rate_per_hour * (weekly_working_hours * 4)
gross_salary = base_salary + bonus_per_month
tax_deduction = gross_salary * 0.15
net_salary = gross_salary - tax_deduction - pension_deduction

Output 
Net Salary
Gross Salary
Bonus Payment


Pseudo Code


1.   Start the program.
2. Declare base_salary, pension_deduction, gross_salary, bonus_per_month, tax_deduction, net_salary using double data type.
3 .Declare full_name using string data type.
4 .Prompt the user to enter full_name and put it in full_name variable.
5.  Validate the input; if it is invalid, terminate the program, otherwise proceed to step 6.
6. Prompt the user to enter base_salary and put it in base_salary variable.
7.  Validate the input; if it is invalid, terminate the program, otherwise proceed to step 8.
8 . Prompt the user to enter weekly working hours and put it in weekly_working_hours variable.
9. Validate the input; if it is invalid, terminate the program, otherwise proceed to step 10.
10. Prompt the user to enter bonus rate per hour and put it in bonus_rate_per_hour variable.
11. Validate the input; if it is invalid, terminate the program, otherwise proceed to step 12.
12 .Do operation 0.05 * base_salary and put it in pension_deduction.
13 . Do operation bonus_rate_per_hour * (weekly_working_hours * 4) and put it in bonus_per_month.
14. Do operation base_salary + bonus_per_month and put it in gross_salary.
15. Do operation gross_salary * 0.15 and put it in tax_deduction.
16. Do operation gross_salary - tax_deduction - pension_deduction and put it in net_salary.
17. Print Net salary with descriptive message.
18. Print Gross salary with descriptive message.
19. Print bonus payment of month with descriptive message.
20. Stop the program.



flowchart

[flowchart]



