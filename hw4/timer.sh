#!/bin/bash
#shell script to call each algorithm and output their rurnning time to file results.csv
#command to time driver is:
# (time ./driver.out <number of integers in input array> <algorithm to use for sorting (1-4))
#

make clean
make

echo "100 ints" > results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 10 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 10 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 10 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 10 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "150 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 100 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 100 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 100 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 100 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "200 ints" >> results.csv

echo -e "nnsertionSort" >> results.csv

(time ./driver.out 1000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 1000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 1000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 1000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "250 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 10000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 10000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 10000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 10000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "300 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 20000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 20000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 20000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 2s0000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "350 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "400 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "450 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "550 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "750 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "950 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "1150 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv


echo "1250 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv


echo "1350 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "1500 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 30000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 30000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 30000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 30000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv
