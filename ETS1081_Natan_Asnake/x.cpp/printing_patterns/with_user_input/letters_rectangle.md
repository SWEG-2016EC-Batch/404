## Pseudocode for letters rectangle

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

Calculate ch = 'a' + (j - 1) % 26

Output ch

Increment j by 1

Go to InnerLoop

### NewLine
Output new line

Increment i by 1

Go to OuterLoop

### EndProgram
End Program