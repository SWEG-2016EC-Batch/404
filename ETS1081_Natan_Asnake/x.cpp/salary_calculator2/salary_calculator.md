tart

## input
        Read base_salary
        Read working_hours
        if working hours > 40 read bonus_rate
## calculation
    calculate gross_salary as gross_salary= base_salary + bonus
    calculate bonus as bonus= (working hours-40) * bonus_rate
    calculate pension as pension=base_salary * 0.07
       if gross_salary <=200 goto tax 1
       if gross_salary > 200 && gross_salary <= 600 goto tax 2
       if gross_salary > 600 && gross_salary <= 1200 goto tax 3
       if gross_salary > 1200 && gross_salary <= 2000 goto tax 4
       if gross_salary > 2000 && gross_salary < 3500  goto tax 5
       if gross_salary > 3500 goto tax 6	
### tax 1
       tax=0
### tax 2
     tax = 0.1 * gross_salary
### tax 3
    tax = 0.15 * gross_salary
### tax 4
    tax = 0.2 * gross_salary
### tax 5
    tax = 0.25 * gross_salary
### tax 6
    tax = 0.3 * gross_salary

    calculate net_salary as net_salary = gross_salary-(pension + tax)
    output net_salary
### End program
    end program
