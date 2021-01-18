def minSwaps(arr, n) : 

	numberOfOnes = 0
	
	for i in range(0, n) : 

		if (arr[i] == 1) : 
			numberOfOnes = numberOfOnes + 1
	
	x = numberOfOnes 
	
	count_ones = 0
	maxOnes = 0
	
	for i in range(0, x) : 

		if(arr[i] == 1) : 
			count_ones = count_ones + 1
		
	maxOnes = count_ones 
		
	for i in range(1, (n - x + 1)) : 
		
		if (arr[i - 1] == 1) : 
			count_ones = count_ones - 1
	
		if(arr[i + x - 1] == 1) : 
			count_ones = count_ones + 1
		
		if (maxOnes < count_ones) : 
				maxOnes = count_ones 

	numberOfZeroes = x - maxOnes 
	
	return numberOfZeroes 

s = input()
a = []
for i in s:
    a.append(int(i))
n = 9
print (minSwaps(a, n)) 