# System Design
1. Input:
   -Accepts the file size in bytes from the user.
   -validates the input and allows the user to re-enter if an invalid input was chosen.

2. Calculation:
 • Calculates the time required for file transfer by dividing the given bytes by 960 and converts to the appropriate seconds, minutes, hours,or days.

3. Output Component:
  • Displays the calculated time in a user-friendly format.
# Pseudo code
## Start Program

**Step 1:** Define a constant for characters per second.
- Set character_per_second = 960

**Step 2:** Get the file size from the user.
- Prompt the user to input file_size.

**Step 3:** Calculate the total time in seconds required to read the file.
- Compute seconds = file_size / character_per_second

**Step 4:** Convert seconds into minutes, hours, and days.
- Calculate m1 = seconds / 60 (total minutes)
- Calculate s1 = seconds % 60 (remaining seconds)
- Calculate h1 = m1 / 60 (total hours)
- Calculate m2 = m1 % 60 (remaining minutes)
- Calculate d1 = h1 / 24 (total days)
- Calculate h2 = h1 % 24 (remaining hours)

**Step 5:** Determine the appropriate time format to display.
- If seconds < 60, then:
  - Print seconds "seconds"
- Else if m1 < 60, then:
  - Print m1 "minutes and" s1 "seconds"
- Else if h1 < 24, then:
  - Print h1 "hours and" m2 "minutes"
- Else:
  - Print d1 "days and" h2 "hours"

### End Program
