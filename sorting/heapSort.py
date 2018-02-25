import math
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

#returns root of max heap or first element in array
#runs in O(lgn) time
def heapMax(Object):
    Array = Object.getArray()
    return Array[0]

#replaces current root node with last node
#re-maxHeapifies heap after decreasing total getHeapSize
#returns max
#runs in O(lgn) time
def heapExtractMax(Object):
    Array = Object.getArray()
    if Object.heapSize() < 1:
		print("error: heap underflow")
    heapMax = Array[0]
    Array[0] = Array[Object.heapSize()]
    Object.setHeapSize(Object.getHeapSize()-1)
    maxHeapify(Object,0)
    return heapMax

'''
HEAP-INCREASE-KEY(A,i,key):
    if key < A[i]:
        perror "new key is smaller than current key"
    A[i] = key
    while i > 1 and A[PARENT(i) < A[i]]:
        exchange A[i] with A[PARENT(i)]
        i = PARENT(i)
'''
#runs in O(lgn) time
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
#runs in O(lgn) time
def maxHeapInsert(Object,key):
    Array = Object.getArray()
    Object.setHeapSize(Object.getHeapSize()+ 1)
    Array[Object.getHeapSize()] = -1
    heapIncreaseKey(Object,key)

#returns parent node of i
def PARENT(i):
    return int(floor(i/2))

#returns left child node of i
#indices starting at 0
def LEFT(i):
    return (2*i + 1)

#returns right child node of i
#indices starting at 0
def RIGHT(i):
    return ((2*i) + 2)

#starting with index i, reorders part ofObjects array
#into max heap. its possible for other subtrees to lack
#correct structure and must be maxHeapified themselves
#runs in O(lgn) time
def maxHeapify(Object,i):
    Array = Object.getArray()
    left = LEFT(i)
    right = RIGHT(i)
    # print("key at " + str(i) + ": " + str(Array[i]))
    # if left <= (Object.getHeapSize()-1):
        #print("key at " + str(left) + ": " + str(Array[left]))
    # if right <= (Object.getHeapSize()-1):
        #print("key at " + str(right) + ": " + str(Array[right]))
    largest = i
    #print("heap size: " + str(Object.getHeapSize()))
    #if the left child node is in the heap and greater than the parent node
    if left <= (Object.getHeapSize()-1) and Array[left] > Array[i]:
		largest = left
    #if the right child node is in the heap and greater than the parent node
    if right <= (Object.getHeapSize()-1) and Array[right] > Array[largest]:
		largest = right
    #if the parent node is less than its largest child
    if largest != i:
        #print("largest:" + str(largest))
        temp = Array[i]
        Array[i] = Array[largest]
        Array[largest] = temp
        #print(Array)
        maxHeapify(Object,largest)

#iterates over Objects array using maxHeapify to make
#entire array into max heap
#runs in O(n) time
def buildMaxHeap(Object):
    Array = Object.getArray()
    #Object.setHeapSize(len(Array)) #heapSize set in constructor
    i = int(math.floor(len(Array)/2)) #starts at last parent node
    while i >= 0:
        #print("i:" + str(i))
        #print("key:" + str(Array[i]))
        maxHeapify(Object,i)
        i -= 1

#Objects array begins as entire max heap and
#and as nodes are removed and array is sorted
#the array and max heap become separate based on length
#the heap sort becomes shorter, while all elements
#remain in the array but are "removed" from heap
#runs in O(nlgn) time
def heapsort(Object):
    buildMaxHeap(Object)
    Array = Object.getArray()
    i = len(Array)-1 #index of last node in array
    while i >= 0:
        #print(i)
        temp = Array[0] #grab largest key in heap
        Array[0] = Array[i]
        Array[i] = temp
        Object.setHeapSize(Object.getHeapSize()-1)
        maxHeapify(Object,0)
        i-=1

if __name__ == "__main__":


    array = [1,2,3,4,5,6,7,8,9,10]
    heap = Object(10,array)
    heapsort(heap)
    print(heap.getArray())
