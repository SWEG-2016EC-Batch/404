
## Pseudocode for inverted full pyramid

Start
### Input
    Read rows
    Read columns

### OuterLoop
Initialize i = 1

If i > rows then go to EndProgram

Initialize j = 1

### InnerLoop
If j > i then go to StarLoop

Output "  "  

Increment j by 1

Go to InnerLoop

### StarLoop
Initialize k = 0

If k > (cols - i) then go to NewLine

Output "* "

Increment k by 1

Go to StarLoop

### NewLine
Output new line

Increment i by 1
Go to OuterLoop

### EndProgram
End Program