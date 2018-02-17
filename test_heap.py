import unittest
import heapSort
import random
from heapSort import Object

class TestHeap(unittest.TestCase):

    def test_construct(self):
        print("test_construct")
        array = [1,2,3,4]
        self.obj1 = Object(len(array),array)
        self.obj2 = Object(len(array),array)

    def test_getArray(self):
        print("test_getArray")
        array = [1,2,3,4]
        self.obj1 = Object(len(array),array)
        self.obj2 = Object(len(array),array)
        print(self.obj1.getArray())
        print(self.obj2.getArray())

    def test_LEFT(self):
        print("test_LEFT")
        self.assertEqual(heapSort.LEFT(2),4)
        self.assertEqual(heapSort.LEFT(7),14)

    def test_RIGHT(self):
        print("test_RIGHT")
        self.assertEqual(heapSort.RIGHT(2),5)
        self.assertEqual(heapSort.RIGHT(7),15)


if __name__ == '__main__':
    unittest.main()
