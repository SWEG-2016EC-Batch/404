## **QUESTION**
Write a program that read the various assessments, compute the total mark and print the
corresponding letter-grade based on the following scales.</br>
Assessments</br>
➢ Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%
## **PROBLEM ANALYSIS**
### **Input**:- 
Test score out of 15, project score out of 20, assignment out of 10 and final exam out of 50. This program assumes that each category cannot take in a score greater than its limit. 
For instance one cannot input 18 for a test score ,which is greater than 15.
### **Output**:-
➢letter grade A+ for score greater or equal to 90.</br>
➢letter grade A for score greater or equal to 80 and less than 90.</br>
➢letter grade B+ for score greater or equal to 75 and less than 80.</br>
➢letter grade of B for score greater or equal to 60 and less than 75.</br>
➢letter grade of C+ for score greater or equal to 55 and less than 60.</br>
➢letter grade of C for score greater or equal to 45 and less than 55.</br>
➢letter grade of D for score greater or equal to 30 and less than 45.</br>
➢letter grade of F for score less than 30.</br>
### **Operation**:-
1. Computation of the total grade by adding individual scores altogether.
2. Assignment of the respective letter grade.
## **PESUDOCODE**
1. Start the program
2. Read score for test,project,assignment and final exam .
3. Validate input by checking if each lies below or equal to their maximum attainable grade.
4. if vaild continue else terminate the program.
5. Compuute total grade as test score+ project score+ assignment score + final exam.
6. determine letter grade and print as follows: </br>
      6.1.If total grade is  greater or equal to 90 print A+.
      6.2. else if total grade greater or equal to 75 and less than 80 print A.
      6.3.else if total grade greater or equal to 75 and less than 80. print B+.
      6.4.else if total grade greater or equal to 60 and less than 75. print B.
      6.5.else if total grade greater or equal to 55 and less than 60. print C+.
      6.6. else if total grade greater or equal to 45 and less than 55. print C.
      6.7.else if total grade greater or equal to 30 and less than 45. print D.
      6.8.else if total grade less than 30. print F.
      6.9.else print incomplete.
7. Stop the program.
## **FLOWCHART**
``` mermaid
flowchart TD
    Start(["Start the program"]) --> Read["Read test_score, project_score, assignment_score, final_exam_score"]
    
    Read --> Validate{"Are all scores found below or equal to their maximum range?"}
    
    Validate -->|No| InvalidInput --> End(["Stop the program"])
    Validate -->|Yes| ComputeTotal["Compute total_grade = test_score + project_score + assignment_score + final_exam_score"]

    ComputeTotal --> GradeCheck{"Check total_grade"}
    
    GradeCheck -->|>= 90| Aplus["Print 'A+'"] --> End
    GradeCheck -->|>= 80| A["Print 'A'"] --> End
    GradeCheck -->|>= 75| Bplus["Print 'B+'"] --> End
    GradeCheck -->|>= 60| B["Print 'B'"] --> End
    GradeCheck -->|>= 55| Cplus["Print 'C+'"] --> End
    GradeCheck -->|>= 45| C["Print 'C'"] --> End
    GradeCheck -->|>= 30| D["Print 'D'"] --> End
    GradeCheck -->|< 30| F["Print 'F'"] --> End

    InvalidInput --> End(["Stop the program"])
    Aplus --> End
    A --> End
    Bplus --> End
    B --> End
    Cplus --> End
    C --> End
    D --> End
    F --> End


```
