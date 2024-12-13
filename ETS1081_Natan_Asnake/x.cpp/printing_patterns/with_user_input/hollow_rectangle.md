
## Pseudocode for hollow_rectangle

Start
### Input
    Read rows
    Read columns
### OuterLoop
Initialize i = 1

If i > rows then go to EndProgram

Initialize j = 1

### InnerLoop
If j > columns then go to NewLine

If i == 1 or i == rows or j == 1 or j == columns then
    Output "* "
    
else
    Output "  "

Increment j by 1

Go to InnerLoop

### NewLine
Output new line

Increment i by 1
Go to OuterLoop

### EndProgram
End Program
