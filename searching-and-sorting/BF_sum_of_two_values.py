import sys

n,x = map(int, sys.stdin.readline().strip().split())
arr = list(map(int, sys.stdin.readline().strip().split()))
for i in range(n):
	for j in range(i+1, n):
		if arr[i]+arr[j] == x:
			sys.stdout.write(str(i+1) + " " +str(j+1) + "\n")
			sys.exit()

sys.stdout.write("IMPOSSIBLE")
