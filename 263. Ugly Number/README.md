# 263. Ugly Number

 ## Explination:
  - An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

 ## Algorithm:
  - Check first the number if 0 return false if less than 6 and greater than 1 return true
  - Make a function to % the number by 2,3 and 5
  - If one of them equal 0 divide the number by it until the number equal 1 
  - If else return 0
  - At the end return the number which equal 1 and check
 
 
