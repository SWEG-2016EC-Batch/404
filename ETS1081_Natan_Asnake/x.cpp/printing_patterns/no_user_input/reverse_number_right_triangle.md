## Pseudocode for reverse number right triangle

Start

### OuterLoop
Initialize i = 1

If i > 5 then go to EndProgram

### SpaceLoop
Initialize k = 1

If k > (5 - i) then go to NumberLoop

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
