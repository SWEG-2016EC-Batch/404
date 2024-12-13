## Pseudocode for reverse number right triangle

Start
### Input
    Read rows
    
### OuterLoop
Initialize i = 1

If i > rows then go to EndProgram

### SpaceLoop
Initialize k = 1

If k > (rows - i) then go to NumberLoop

Output "  "

Increment k by 1

Go to SpaceLoop

### NumberLoop
Initialize j = i

If j < 1 then go to NewLine

Output j

Output " "

Decrement j by 1

Go to NumberLoop

### NewLine
Output new line

Increment i by 1

Go to OuterLoop

### EndProgram
End Program
