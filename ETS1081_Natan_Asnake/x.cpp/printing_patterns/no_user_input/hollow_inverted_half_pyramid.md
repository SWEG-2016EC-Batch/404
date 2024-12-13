## Pseudocode for hollow inverted half pyramid

Start

### OuterLoop
Initialize i = 1
If i > 6 then go to EndProgram

### InnerLoop
Initialize j = 1
If j > 6 then go to CheckMiddle

If i == 1 or j == 1 then
    Output "* "

Increment j by 1
Go to InnerLoop

### CheckMiddle
If i > 1 and i < 6 then

Initialize k = 1

If k > (5 - i) then go to PrintStar

### SpaceLoop
If k <= (5 - i)

Output "  "

Increment k by 1

Go to SpaceLoop

### PrintStar
Output "* "

### NewLine

Output new line

Increment i by 1

Go to OuterLoop

### EndProgram
End Program
