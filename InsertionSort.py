from __future__ import print_function


#pseudocode
#INSERTION-SORT(A)				cost	times 
#for j = 2 to A.length				c1 	n
#	key = A[j] //A being the array		c2 	n - 1
#	//Insert A[j] into the sorted		
#	sequence A[1 ... j-1].
#	i = j -1				c4	n - 1
#	while i > 0 and A[i] > key		c5	n - 1
#		A[i+1] = A[i]			c6	summation, j=2 to n, t (j subscript)
#		i = i - 1			c7 	summation, j=2 to , t(j subscript) - 1
#	A[i+1] = key				c8 	n - 1


if __name__ == "__main__":
	an_array = [5,3,2,4,1]
	print("an_array before sort: ", end='')
	print(an_array)
	
	for j in range(1,len(an_array)):
		key = an_array[j]
		i = j - 1
		while i >= 0 and an_array[i] > key:
			an_array[i+1] = an_array[i]
			i = i - 1
		an_array[i+1] = key
	print("an_array after sort:  ", end='')
	print(an_array)
