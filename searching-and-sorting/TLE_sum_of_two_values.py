import sys

n, x = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))
index_map = {}

for i in range(n):
    complement = x - arr[i]
    if complement in index_map:
        sys.stdout.write(f"{index_map[complement]+1} {i+1}\n")
        sys.exit()
    index_map[arr[i]] = i

sys.stdout.write("IMPOSSIBLE\n")
