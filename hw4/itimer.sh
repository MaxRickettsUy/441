#!/bin/bash
#shell script to call each algorithm and output their rurnning time to file iresults.csv
#command to time driver is:
# (time ./driver.out <number of integers in input array> <algorithm to use for sorting (1-4))
#

make clean
make

echo "100 ints" > iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 100 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 100 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "150 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 150 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 1500 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "200 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 200 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 200 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "250 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 250 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 250 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "300 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 300 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 300 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "350 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 350 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 350 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "400 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 400 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 400 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "450 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 450 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 450 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "550 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 550 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 550 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "750 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 750 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 750 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "950 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 950 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 950 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "1150 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 1150 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 1150 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv


echo "1250 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 1250 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 1250 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "1350 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 1350 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 1350 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv

echo "1500 ints" >> iresults.csv

echo -e "\nheapSort" >> iresults.csv

(time ./driver.out 1500 3) 2>> iresults.csv

echo -e "\niterative_heapSort" >> iresults.csv

(time ./driver.out 1500 5) 2>> iresults.csv

echo "-----------------------------------" >> iresults.csv
