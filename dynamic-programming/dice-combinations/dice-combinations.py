import sys

def main():

	n = int(sys.stdin.readline().strip())
	arr = [0 for i in range(n+1)]
	MOD = (10**9) + 7
	arr[0] = 1
	for i in range(1, len(arr)):
		for j in range(1, 7):
			if (i-j) >= 0:
				arr[i] = (arr[i] + arr[i-j])%MOD
	sys.stdout.write(str(arr[n]))
main()