## Pseudocode for alphabet rectangle

1. Start  

2. Initialize startChar = 'a'  

3. Initialize endChar = 'x'  

4. Initialize currentChar = startChar  

5. Set i = 0  

### Outer Loop:  

6. If i >= 4 then goto end_program  

7. Set j = 0  

### Inner Loop:  

8. If j >= 6 then goto new_line  

9. Output currentChar  

10. Increment currentChar  

11. If currentChar > endChar then goto endinnerloop  

12. Increment j  

13. goto inner_loop  

### New Line:  

14. Output new line  

15. Increment i  

16. goto outer_loop  

### End Inner Loop:  

17. goto new_line  

### End Program:  

18. End Program  
