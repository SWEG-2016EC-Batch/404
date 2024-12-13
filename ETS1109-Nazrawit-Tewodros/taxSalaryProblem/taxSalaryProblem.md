## **QUESTION**:-
Develop a program that find the Net-Pay of an employee after deduction of pension (7%) and tax based on tax rate provided.
The program should read the basic salary, worked hours, and bonus rate. If the employee worked hours exceed 40 hrs,the program prompts the user to enter an over-time bonus rate/hour.</br>
Use tax range as :- </br>
up to 200 Br-0%</br>
200 BR upto 600 Br - 10%</br>
600 Br upto 1200 Br- 15% </br>
1200 Br upto 2000 Br- 20% </br>
2000 Br upto 3500 Br- 25% </br>
3500 Br and above - 30% 
## **PROBLEM ANALYSIS**:-
#### **Input**:-
1. Base salary
2. Hours worked
3. Bonus rate
4. Over time bonus rate if hours exceed 40
#### **Output**:-
1. Net pay
#### **Operation**:-
1. gross salary = base salary+ bonus
2. bonus = extra hours *bonus
3. pension= base salary *0.07
4. tax= gross salary * tax rate
5. net salary= gross salary -pension-tax
## **PSEUDOCODE**
1. Start the program .
2. Read base salary.
3. Validate input</br>
   3.1. If input is correct continue else break
4. Read hours worked</br>
   4.1. If input is correct continue else break
5. Read bonus rate per hour
6. if hours worked >40</br>
   6.1. Read overtime bonus rate</br>
   6.2. compute overtimeHours = workedHours - 40</br>
   6.3. compute overtimePay = overtimeHours * overtimeRate</br>
7. else set overtimePay=0
8. Compute bonusPay = (workedHours * bonusRate) + overtimePay
9. Compute grossPay = baseSalary + bonusPay
10. Compute pension = baseSalary * pensionRate
11. DETERMINE taxRate based on baseSalary:
   - if baseSalary <= 200:
        taxRate = 0.0
   - else iF baseSalary <= 600:
        taxRate = 0.10
   - else if  baseSalary <= 1200:
        taxRate = 0.15
   - else if  baseSalary <= 2000:
        taxRate = 0.20
   - else if baseSalary <= 3500:
        taxRate = 0.25
   - else:
        taxRate = 0.30
12. compute tax = grossPay * taxRate
13. compute netPay = grossPay - pension - tax
14. Display pension,groosSalary,tax and netSalary
15. Stop the program.
## **FLOWCHART**
``` mermaid
flowchart TD
    Start((Start))
    A[Enter base salary]
    B{Is base salary valid?}
    C[Enter worked hours]
    D{Are worked hours valid?}
    E[Enter bonus rate per hour]
    F{Is bonus rate valid?}
    G{Worked hours > 40?}
    H[Enter overtime bonus rate per hour]
    I{Is overtime rate valid?}
    J[Calculate overtime pay: <br> overtimeHours = workedHours - 40 <br> overtimePay = overtimeHours * overtimeRate]
    K[Set overtimePay = 0]
    L[Calculate bonusPay: <br> bonusPay = workedHours * bonusRate + overtimePay]
    M[Calculate grossPay: <br> grossPay = baseSalary + bonusPay]
    N[Calculate pension: <br> pension = baseSalary * 0.07]
    O{Determine tax rate: <br> based on baseSalary}
    P[Calculate tax: <br> tax = grossPay * taxRate]
    Q[Calculate netPay: <br> netPay = grossPay - pension - tax]
    R[Display results: <br> Gross Pay, Pension, Tax, Net Pay]
    End((End))

    Start --> A --> B
    B -->|Yes| C
    B -->|No| Z1[Display Invalid salary & Exit]
    C --> D
    D -->|Yes| E
    D -->|No| Z2[Display Invalid worked hours & Exit]
    E --> F
    F -->|Yes| G
    F -->|No| Z3[Display Invalid bonus rate & Exit]
    G -->|Yes| H
    G -->|No| K
    H --> I
    I -->|Yes| J
    I -->|No| Z4[Display Invalid overtime rate & Exit]
    J --> L
    K --> L
    L --> M --> N --> O --> P --> Q --> R --> End
```
