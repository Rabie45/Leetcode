# 121. Best Time to Buy and Sell Stock

 ## Explination:
 - Determine the best time to buy and sell a product to gain max profit

## Algorithm:
- Assume minmum price is prices[0] and maximun profit is 0
- Create a for loop to check if the price is less than the minumum price make the price is the new one
- Else subtract the price[index] - min price 
 - If greater than the max profit change the value of max profit with the new one
- Dont forget to return the max value



