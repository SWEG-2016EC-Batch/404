## Pseudocode for inverted full pyramid

Start

### OuterLoop
Initialize i = 1

If i > 6 then go to EndProgram

Initialize j = 1

### InnerLoop
If j > i then go to StarLoop

Output "  "  

Increment j by 1

Go to InnerLoop

### StarLoop
Initialize k = 1

If k > (6 - i) then go to NewLine

Output "* "

Increment k by 1

Go to StarLoop

### NewLine
Output new line

Increment i by 1
Go to OuterLoop

### EndProgram
End Program
