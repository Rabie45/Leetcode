# 242. Valid Anagram

 ## Explination:
 - Check if the two words have the same letters

 ## Algorithm_1:
 - If lenght of the two strings not equal return false 
 - Create two arrays with length 26 all initalized with 0
 - Make a for loop to g through the strings
 - For every character make the index of the array = s[i] - 'a' to get the index of the letter and make ++ to increment the 0
 - Make another for loop to check the two array if not equal return false 
 - Else return false 
 
![al1](https://user-images.githubusercontent.com/76526170/211572169-e7b81607-a7a7-47c8-b70e-0cdc920665b5.PNG)

## Algorithm_2:
 - This idea is pretty easy but slower than the first ne
 - Use Quick sort function to sort the array of charachters (qsort|)
 - Use strcmp function to compare between two strings 
 - If equal the function returns 0 which mens return true 
 - Else the string not anagram return fales
 

![al2](https://user-images.githubusercontent.com/76526170/211572159-4b19cc8e-998e-496a-b37c-09bfe30ebd86.PNG)


