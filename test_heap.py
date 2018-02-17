import unittest
import heapSort

class TestHeap(unittest.TestCase):

    def testLeft(self):
        self.assertEqual(heapSort.LEFT(2),4)
        self.assertEqual(heapSort.LEFT(7),14)
    def testRight(self):
        self.assertEqual(heapSort.RIGHT(2),5)
        self.assertEqual(heapSort.RIGHT(7),15)
    
