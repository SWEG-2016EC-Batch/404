
## Pseudocode for hollow inverted half pyramid

Start
### Input
    Read rows
    Read columns
### OuterLoop
Initialize i = 1
If i > Rows then go to EndProgram

### InnerLoop
Initialize j = 1
If j > rows then go to CheckMiddle

If i == 1 or j == 1 then
    Output "* "

Increment j by 1
Go to InnerLoop

### CheckMiddle
If i > 1 and i < rows then

Initialize k = 1

If k > (rows-1 - i) then go to PrintStar

### SpaceLoop
If k <= (rows-1 - i)

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
