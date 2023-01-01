# 242. Valid Anagram

 ## Explination:
 - Check if the two words have the same letters

 ## Algorithm:
 - If lenght of the two strings not equal return false 
 - Create two arrays with length 26 all initalized with 0
 - Make a for loop to g through the strings
 - For every character make the index of the array = s[i] - 'a' to get the index of the letter and make ++ to increment the 0
 - Make another for loop to check the two array if not equal return false 
 - Else return false 

 

