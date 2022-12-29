# 190. Reverse Bits

 ## Explination:
 - Reverse the binary number given and calculate its value 
 
 ## Algorithm:
 - Make while loop while n > 0 stay in
 - Get the remndir of the number by 2 (so you get the first digit form the right)
 - Add the new value to the remndir multipled by the number to the power i (intializid by 31)
 - Divide the number by two
 - Return the new value

