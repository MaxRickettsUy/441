'''
MAX-HEAPIFY(A,i):
    l = LEFT(i)
    r = RIGHT(i)
    if l  <= A.heap-size and A[l]  > A[i]
        largest =  l
    else:
        largest = i
    if r <= A.heap-size and A[r]  > A[largest]
        largest = r
    if largest != i
        exchange A[i]  with A[largest]
    MAX-HEAPIFY(A,largest)
'''
def maxHeapify(Array,i):
	left = LEFT(i)
	right = RIGHT(i)
	largest = i
	if left <= Array.heapSize() and Array[left] > Array[i]:
		largest = left
	elif right <= Array.heapSize() and Array[right] > Array[largest]:
		largest = right
	if largest != i:
		temp = Array[i]
		Array[i] = Array[largest]
		Array[largest] = temp
	maxHeapify(Array,largest)

'''
BUILD-MAX-HEAP(A):
    A.heap-size = A.length
    for i = floor(A.length/2) downto 1
        MAX-HEAPIFY(A,i)
'''
def buildMaxHeap(Array):
	Array.heapSize() = len(Array)
	i = floor(len(Array)/2)
	while i > 0:
		maxHeapify(Array,i)
		i -= 1
'''
HEAPSORT(A):
    BUILD-MAX-HEAP(A)
    for i = A.length downto 2
        exchange A[1]  with A[i]
        A.heap-size = A.heap-size - 1
        MAX-HEAPIFY.A;1/
'''
def heapsort(Array):
	buildMaxHeap(Array)
	i = len(Array)-1
	while i > 1:
		temp = Array[0]
		Array[0] = Array[i]
		Array[i] = Array[temp]
		A.heapSize() -= 1
		maxHeapify(Array,0) 


'''
HEAP-MAXIMUM(A,1):
   return A[1]
'''
def heapMax(Array,0):
	return A[0]

'''
HEAP-EXTRACT-MAX(A):
    if A.heap-size < 1
        perror "heap underflow"
    max = A[1]
    A[1] = A[A.heap-size]
    A.heap-size = A.heap-size - 1
    MAX-HEAPIFY(A,1)
    return max
'''
def heapExtractMax(Array):
	if Array.heapSize() < 1:
		print("error: heap underflow")
	max = Array[0]
	A[0] = Array[Array.heapSize()]
'''
HEAP-INCREASE-KEY(A,i,key):
    if key <A[i]:
        perror “new key is smaller than current key”
    A[i] = key
    while i > 1 and A[PARENT(i)]  < A[i]:
        exchange A[i]  with A[PARENT(i)]
        i = PARENT(i)
'''

'''MAX-HEAP-INSERT(A,key):
    A.heap-size = A.heap-size + 1
    A[A.heap-size] = -infiniti
    HEAP-INCREASE-KEY(A,A.heap-size,key)
'''


'''
PARENT(i):
   return bi=2c
'''

'''
LEFT(i):
   return 2i
'''
#RIGHT(i):
#   return 2i + 1
