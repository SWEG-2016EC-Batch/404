# System Design for grade

## Input
1. **test**: float data type
2. **quiz**: float data type
3. **project**: float data type
4. **assignment**: float data type
5. **final_exam**: float data type

## Output
1. **Grade**


## Operation
1. **Addition**:
    1. **total_points = test + quiz + project + assignment + final_exam**

## Pseudo Code
1. Start the program.
2. Declare `test`, `quiz`, `project`, `assignment`, `final_exam` using `float` data type.
4. Prompt the user to enter `test`, `quiz`, `project`, `assignment`, `final_exam`  and  and validate it within its range.
5. if it is invalid, terminate the program, otherwise proceed to step 6.
6. total_points -> test + quiz + project + assignment + final_exam
7.Check condition for grade
    7.1 if total_points >=90 print A+
    7.2 if total_points >=80 print A
    7.3 if total_points >=75 print B+
    7.4 if total_points >=60 print B
    7.5 if total_points >=55 print C+
    7.6 if total_points >=45 print C
    7.7 if total_points >=30 print D
    7.8 else print F
8. stop the program
