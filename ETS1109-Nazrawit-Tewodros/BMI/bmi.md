## **PROBLEM ANALYSIS**
### *Question*:-
Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.
### *Input*:-
1. Height 
2. Weight
3. Age 
### *Output*:-
1. Body Mass Index
### *Operation*:-
1. BMI= weight /(height *height)
 ## **PSEUDOCODE**
1. Start
2. Input height in meters
   - If invalid, prompt again
3. Input weight in kilograms
   - If invalid, prompt again
4. Input age
   - If invalid, prompt again
5. Calculate BMI
   - BMI = weight / (height * height)
6. Display BMI
7. Check age < 18
   - If true, go to step 8
   - If false, go to step 9
8. Check age group and BMI status
   - Age 2-4: Underweight < 14.0, Normal 14.0-16.7, Overweight 16.7-17.9, Obese > 17.9
   - Age 5-7: Underweight < 13.0, Normal 13.0-15.6, Overweight 15.6-17.1, Obese > 17.1
   - Age 8-10: Underweight < 12.1, Normal 12.1-14.7, Overweight 14.7-16.2, Obese > 16.2
   - Age 11-13: Underweight < 11.1, Normal 11.1-13.8, Overweight 13.8-15.3, Obese > 15.3
   - Age 14-17: Underweight < 10.2, Normal 10.2-12.8, Overweight 12.8-14.3, Obese > 14.3
9. Check BMI status for adults
   - Underweight < 18.5
   - Normal 18.5-24.9
   - Overweight 25.0-29.9
   - Obese > 29.9
10. Display weight status
11. End
## **FLOWCHART**
![mermaid-flow-100x](https://github.com/user-attachments/assets/134eb809-6fa5-43ef-9050-7c204585c5a0)


