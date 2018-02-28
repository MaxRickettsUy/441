#!/bin/bash
#shell script to call each algorithm and output their rurnning time to file results.csv
#command to time driver is:
# (time ./driver.out <number of integers in input array> <algorithm to use for sorting (1-4))
#

make clean
make

echo "10 ints" > results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 10 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 10 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 10 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 10 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "100 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 100 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 100 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 100 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 100 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "1000 ints" >> results.csv

echo -e "nnsertionSort" >> results.csv

(time ./driver.out 1000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 1000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 1000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 1000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv

echo "10000 ints" >> results.csv

echo -e "\ninsertionSort" >> results.csv

(time ./driver.out 10000 1) 2>> results.csv

echo -e "\nmergeSort" >> results.csv

(time ./driver.out 10000 2) 2>> results.csv

echo -e "\nheapSort" >> results.csv

(time ./driver.out 10000 3) 2>> results.csv

echo -e "\nquickSort" >> results.csv

(time ./driver.out 10000 4) 2>> results.csv

echo "-----------------------------------" >> results.csv
