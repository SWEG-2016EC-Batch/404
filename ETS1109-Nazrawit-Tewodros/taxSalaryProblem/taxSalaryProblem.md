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
2. read base salary and  hours worked.
3. validate input and if hours worked is greater than 40 hours.
