## Pseudocode for inverted half pyramid

Start
### Input
    Read rows
    Read columns

### OuterLoop
Initialize i = 1

If i > rows then go to EndProgram

Initialize j = 0

### InnerLoop
If j > (columns - i) then go to NewLine

Output "* "

Increment j by 1

Go to InnerLoop

### NewLine
Output new line

Increment i by 1

Go to OuterLoop

### EndProgram
End Program
