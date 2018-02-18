import unittest
import heapSort
import random
from heapSort import Object

class TestHeap(unittest.TestCase):

    def test_construct(self):
        # print("test_construct")
        array = [1,2,3,4,5,6,7,8,9,10]
        self.obj1 = Object(len(array),array)

    def test_getArray(self):
        # print("test_getArray")
        array = [1,2,3,4,5,6,7,8,9,10]
        random.shuffle(array)
        self.obj1 = Object(len(array),array)
        # print(self.obj1.getArray())

    def test_LEFT(self):
        # print("test_LEFT")
        self.assertEqual(heapSort.LEFT(2),5)
        self.assertEqual(heapSort.LEFT(7),15)

    def test_RIGHT(self):
        # print("test_RIGHT")
        self.assertEqual(heapSort.RIGHT(2),6)
        self.assertEqual(heapSort.RIGHT(7),16)

    def test_heapMax(self):
        array = [1,2,3,4,5,6,7,8,9,10]
        random.shuffle(array)
        self.obj1 = Object(len(array),array)
        self.assertEqual(heapSort.heapMax(self.obj1),array[0])

    def test_maxHeapify(self):
        array = [3,1,8,7,9,4,2,6,5,10]
        maxHeap = [8,1,4,7,9,3,2,6,5,10]
        self.obj1 = Object(len(array),array)
        heapSort.maxHeapify(self.obj1,0)
        self.assertSequenceEqual(self.obj1.getArray(),maxHeap)

    def test_buildMaxHeap(self):
        array = [3,1,8,7,9,4,2,6,5,10]
        maxHeap = [10,9,8,7,3,4,2,6,5,1]
        self.obj1 = Object(len(array),array)
        heapSort.buildMaxHeap(self.obj1)
        self.assertSequenceEqual(self.obj1.getArray(),maxHeap)

    def test_heapSort(self):
        array = [3,1,8,7,9,4,2,6,5,10]
        sortedArray = [1,2,3,4,5,6,7,8,9,10]
        self.obj1 = Object(len(array),array)
        heapSort.heapsort(self.obj1)
        self.assertSequenceEqual(self.obj1.getArray(),sortedArray)
        print(self.obj1.getArray())

if __name__ == '__main__':
    unittest.main()
