'''MAX-HEAPIFY(A,i):
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
    MAX-HEAPIFY.A;largest/
'''

'''BUILD-MAX-HEAP(A):
    A.heap-size = A.length
    for i = floor(A.length/2) downto 1
        MAX-HEAPIFY.A;i/
'''

'''HEAPSORT(A):
    BUILD-MAX-HEAP(A)
    for i = A.length downto 2
        exchange A[1]  with A[i]
        A.heap-size = A.heap-size - 1
        MAX-HEAPIFY.A;1/
'''


#HEAP-MAXIMUM(A,1):
#   return AŒ1

'''HEAP-EXTRACT-MAX(A):
    if A: heap-size < 1
        perror "heap underflow"
    max = A[1]
    A[1] = A[A.heap-size]
    A.heap-size = A.heap-size - 1
    MAX-HEAPIFY(A,1)
    return max
'''

'''HEAP-INCREASE-KEY(A,i,key):
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


#PARENT(i):
#   return bi=2c

#LEFT(i):
#   return 2i

#RIGHT(i):
#   return 2i + 1
