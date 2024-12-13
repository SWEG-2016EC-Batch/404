## Pseudocode for hollow_rectangle

Start

### OuterLoop
Initialize i = 1

If i > 7 then go to EndProgram

Initialize j = 1

### InnerLoop
If j > 8 then go to NewLine

If i == 1 or i == 8 or j == 1 or j == 9 then
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
