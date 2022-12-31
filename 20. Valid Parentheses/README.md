# 20. Valid Parentheses
 ## Explination:
 - Open brackets must be closed by the same type of brackets.
 - Open brackets must be closed in the correct order.
 - Every close bracket has a corresponding open bracket of the same type.  

 ## Functions:
 - isopen check for open bracket
 - isopp check for the oppiste of the open bracket

 ## Algorithm:
 - We gonna make an array to use stack approch (if u dont know how it works https://www.geeksforgeeks.org/stack-data-structure/)
 - Make a for loop to go through the array
  - If the character is open bracket add the char in the stack and increase the index
  - Else (check whither the index==0 return false because their is no open bracket)
  - If the stack index-1 == the oppesite of the bracket 
  - Decrement the index
 - If index not = 0 meas every open have close one return true
 - Else return false

