import sys
n, m, k = map(int, sys.stdin.readline().split())

vec = list(map(int, input().split()))
vec1 = list(map(int, input().split()))

vec.sort()
vec1.sort()

count = 0
i = 0
j = 0

while i < n and j < m:
    while not (vec1[j] - k <= vec[i] <= vec1[j] + k):
        if vec1[j] < vec[i]:
            j += 1
        else:
            i += 1
        if not (i < n and j < m):
            print(count)
            exit()

    count += 1
    i += 1
    j += 1

print(count)
