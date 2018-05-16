#!/usr/bin/env python

# COUNTING-SORT(A,B,k)
# let C[0...k] be a new array
# for i = 0 to k
#   C[i] = 0
# for j = 1 to A.length
#   C[A[j]] = C[A[j]] + 1
# C[i] now contains the number of elements equal to i
# for i = 1 to k
#   C[i] = C[i] + C[i-1]
# C[i] now contains the number of elements less than or equal to i
# for j = A.length downto 1
#   B[C[A[j]]] = A[j]
#   C[A[j]] = C[A[j]] -1


def countingSort(A, B, k):
    C = []
    for i in range(0, k):
        C.append(0)
    for j in range(0, k):
        C[A[j]] = C[A[j]] + 1
    for i in range(1, k):
        C[i] = C[i] + C[i-1]
    print(C)
    j = k-1
    while j >= 0:
        B[C[A[j]]] = A[j]
        C[A[j]] = C[A[j]] - 1
        j = j - 1
    return B


if __name__ == "__main__":
    A = [2, 5, 3, 0, 2, 3, 0, 3]
    B = [0, 0, 0, 0, 0, 0, 0, 0]
    B = countingSort(A, B, len(A))
    print("The array before being sorted: ", A)
    print("The array after being sorted: ", B)
