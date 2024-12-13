
## Pseudocode for letters right triangle

Start
### Input
    Read rows


### OuterLoop
Initialize i = 1

If i > rows then go to EndProgram

Initialize j = 1

### InnerLoop
If j > i then go to NewLine

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
