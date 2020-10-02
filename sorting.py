import sys
import random

def quicksort(arr, l, r):
    if l >= r:
        return
    pivot = arr[r]
    i = l
    for j in range(l, r):
        if arr[j] < pivot:
            arr[j], arr[i] = arr[i], arr[j]
            i += 1
    arr[i], arr[r] = arr[r], arr[i]
    quicksort(arr, l, i - 1)
    quicksort(arr, i + 1, r)

def heapify(arr, n, i):
    left = 2 * i + 1
    right = 2 * i + 2
    largest = i
    if left < n and arr[left] > arr[largest]:
        largest = left
    if right < n and arr[right] > arr[largest]:
        largest = right
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)

def heapsort(arr):
    n = len(arr)
    i = n // 2 - 1
    while i >= 0:
        heapify(arr, n, i)
        i -= 1
    i = n - 1
    while i >= 0:
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0)
        i -= 1

arr = [3, 8, 2, 103, 282, 182, 6, 4, 29, 19]
quicksort(arr, 0, len(arr) - 1)
for i in arr:
    sys.stdout.write(str(i) + " ")
print("")

random.shuffle(arr)
heapsort(arr)
for i in arr:
    sys.stdout.write(str(i) + " ")
print("")
