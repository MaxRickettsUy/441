#pseudocode
#FIND-MAXIMUM-SUBARRAY(A,low,high)
#	if high == low
#		return (low,high,A[low])
#	else mid = floor((low+high)/2)
#		(left-low,left-high,left-sum) = 
#			FIND-MAXIMUM-SUBARRAY(A,low,mid)
#		(right-low,right-high,right-sum) = 
#			FIND-MAXIMUM-SUBARRAY(A,mid+1,high)
#		(cross-low,cross-high,cross-sum) = 
#			FIND-MAX-CROSSING-SUBARRAY(A,low,mid,high)
#	if left-sum >= right-sum and left-sum >= cross-sum
#		return (left-low, left-high, left-sum)
#	elseif right-sum >= left-sum and right-sum >= cross-sum
#		return (right-low,right-high,right-sum)
#	else return (cross-low,cross-high,cross-sum)
