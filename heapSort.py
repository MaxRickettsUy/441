
'''
Object contains an the original array to be sorted
and a heap size which is the size of the current unsorted max heap
'''
class Object():
    def __init__(self,heapSize,array):
        self.heapSize = heapSize
        self.array = array

    def setHeapSize(self,newSize):
        self.heapSize = newSize

    def getHeapSize(self):
        return self.heapSize

    def getArray(self):
        return self.array

'''
HEAP-MAXIMUM(A,1):
   return A[1]
'''
def heapMax(Object):
    Array = Object.getArray()
    return Array[0]
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
def heapExtractMax(Objecet):
    Array = Object.getArray()
    if Object.heapSize() < 1:
		print("error: heap underflow")
    max = Array[0]
    Array[0] = Array[Object.heapSize()]
'''
HEAP-INCREASE-KEY(A,i,key):
    if key < A[i]:
        perror "new key is smaller than current key"
    A[i] = key
    while i > 1 and A[PARENT(i) < A[i]]:
        exchange A[i] with A[PARENT(i)]
        i = PARENT(i)
'''

def heapIncreaseKey(Object,i,key):
    Array = Object.getArray()
    if key < Array[i]:
        print("error: new key is smaller than current key")
    Array[i] = key
    while i > 1 and Array[PARENT(i)] < Array[i]:
        temp = Array[i]
        Array[i] = Array[PARENT(i)]
        Array[PARENT(i)] = temp
        i = PARENT(i)
'''MAX-HEAP-INSERT(A,key):
    A.heap-size = A.heap-size + 1
    A[A.heap-size] = -infiniti
    HEAP-INCREASE-KEY(A,A.heap-size,key)
'''
def maxHeapInsert(Object,key):
    Array = Object.getArray()
    Object.setHeapSize(Object.getHeapSize()+ 1)
    Array[Object.getHeapSize()] = -1
    heapIncreaseKey(Object,key)
'''
PARENT(i):
   return floor(i/2)
'''
def PARENT(i):
    return floor(i/2)
'''
LEFT(i):
   return 2i
'''
def LEFT(i):
    return 2*i
'''
RIGHT(i):
   return 2i + 1
'''
def RIGHT(i):
    return ((2*i) + 1)

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
def maxHeapify(Object,i):
    Array = Object.getArray()
    left = LEFT(i)
    right = RIGHT(i)
    largest = i
    #if the left child node is in the heap and greater than the parent node
    if left <= Object.heapSize() and Array[left] > Array[i]:
		largest = left
    #if the right child node is in the heap and greater than the parent node
    elif right <= Object.heapSize() and Array[right] > Array[largest]:
		largest = right
    #if the parent node is less than its largest child
    if largest != i:
		temp = Array[i]
		Array[i] = Array[largest]
		Array[largest] = temp
    maxHeapify(Object,largest)

'''
BUILD-MAX-HEAP(A):
    A.heap-size = A.length
    for i = floor(A.length/2) downto 1
        MAX-HEAPIFY(A,i)
'''
def buildMaxHeap(Object):
    Array = Object.getArray()
    Object.setHeapSize(len(Array))
    i = floor(len(Array)/2)
    while i > 0:
		maxHeapify(Object,i)
		i -= 1
'''
HEAPSORT(A):
    BUILD-MAX-HEAP(A)
    for i = A.length downto 2
        exchange A[1]  with A[i]
        A.heap-size = A.heap-size - 1
        MAX-HEAPIFY.A;1/
'''
def heapsort(Object):
    buildMaxHeap(Object)
    Array = Object.getArray()
    i = len(Array)-1 #index of last node in array
    while i > 1:
		temp = Array[0] #grab largest key in heap
		Array[0] = Array[i]
		Array[i] = Array[temp]
		Object.setHeapSize(Object.getHeapSize()-1)
		maxHeapify(Object,0)

'''if __name__ == "__main__":


    array = [1,2,3,4,5,6,7,8,9,10]
    heap = Object(10,array)

    print(heap.getHeapSize())
'''
