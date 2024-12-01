# System Design
1. Input:
   -Accepts the file size in bytes from the user.
   
   -validates the input and allows the user to re-enter if an invalid input was chosen.

3. Calculation:
 • Calculates the time required for file transfer by dividing the given bytes by 960 and converts to the appropriate seconds, minutes, hours,or days.

4. Output Component:
  • Displays the calculated time in a user-friendly format.
# Pseudo code
### Start Program

**Step 1:** Declare variables.
- Declare file_size, seconds, s1, m1, m2, h1, h2, and d1 using double data type.

**Step 2:** Define a constant for characters per second.
- Set character_per_second = 960

**Step 3:** Get the file size from the user.
- Prompt the user to input file_size.

**Step 4:** Calculate the total time in seconds required to read the file.
- Compute seconds = file_size / character_per_second

**Step 5:** Convert seconds into minutes, hours, and days.
- Calculate m1 = seconds / 60 (total minutes)
- Calculate s1 = seconds % 60 (remaining seconds)
- Calculate h1 = m1 / 60 (total hours)
- Calculate m2 = m1 % 60 (remaining minutes)
- Calculate d1 = h1 / 24 (total days)
- Calculate h2 = h1 % 24 (remaining hours)

**Step 6:** Determine the appropriate time format to display.
- If seconds < 60, then:
  - Print seconds "seconds"
- Else if m1 < 60, then:
  - Print m1 "minutes and" s1 "seconds"
- Else if h1 < 24, then:
  - Print h1 "hours and" m2 "minutes"
- Else:
  - Print d1 "days and" h2 "hours"

### End Program
# Flow Chart
![Flowchart](5.png)
