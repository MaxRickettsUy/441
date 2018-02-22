from math import floor
#source: https://stackoverflow.com/questions/19085450/merge-sort-in-place-for-python-cant-find-what-is-wrong

####################pseudocode##########################
#	
#	MERGE(A,p,q,r):
#		n1 = q - p + 1
#		n2 = r - q
#		let L[1 ... n1 +1] and R[1 ... n2+1] be new arrays
#		for i = 1 to n1
#			L[i] = A[p + i - 1]
#		for j = 1 to n2
#			R[j] = A[q + j]
#		L[n1 + 1] = infinity
#		R[n2 + 1] = infinity
#		i = 1
#		j = 1
#		for k = p to r
#			if L[i] <= R[j]
#				A[k] = L[i]
#				i = i + 1
#			else A[k] = R[j]
#				j = j + 1
#
#######################################################

def merge(A,p,q,r):
	L = A[p:q]
	R = A[q:r]
	print(L)
	print(R)
	i = 0
	j = 0
	k = p
	for l in range(k,r):
		if j >= len(R) or (i < len(L) and L[i] < R[j]):
			A[l] = L[i]
			i = i + 1
		else:
			A[l] = R[j]
			j = j + 1

######################pseudocode#########################
#	
#	MERGE-SORT(A,p,r)
#		if p < r
#			q = floor((p+r)/2)
#			MERGE-SORT(A,p,q)
#			MERGE-SORT(A,q+1,r)
#			MERGE(A,p,q,r)
#
########################################################

def merge_sort(A,p,r):
	if r - p > 1:
		q = int((p+r)/2) #half way point
		merge_sort(A,p,q)
		merge_sort(A,q,r)
		merge(A,p,q,r)

if __name__ == "__main__":
	A = [3,5,2,1,4]
	p = 0
	r = len(A)
	merge_sort(A,p,r)
	print(A)
