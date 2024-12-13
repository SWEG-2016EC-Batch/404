## Pseudocode for hollow full pyramid

Start

Initialize i = 1

### OuterLoop
If i > 6 then go to EndProgram

Initialize j = 1

### SpaceLoop
If j > (6 - i) then go to StarLoop

Output " "

Increment j by 1

Go to SpaceLoop

### StarLoop
If i == 6 then go to FullStarLine

Output "* "

If i > 2 and i < 6 then go to InnerSpaceLoop

Go to EndStarLoop

### InnerSpaceLoop
Initialize j = 1

If j > (i - 2) then go to EndStarLoop

Output "  "

Increment j by 1

Go to InnerSpaceLoop

### EndStarLoop
If i >= 2 and i < 6 then Output "* "

### FullStarLine
If i == 6 then

Initialize k = 1

If k > 5 then go to NewLine

Output "* "

Increment k by 1

Go to FullStarLine

### NewLine

Output new line

Increment i by 1

Go to OuterLoop

### EndProgram
End Program
