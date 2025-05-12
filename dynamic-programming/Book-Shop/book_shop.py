def knap(n, w, p, m):
	k = [[0 for i in range(m+1)] for j in range(n+1)]
	for i in range(1, n+1):
		for j in range(0, m+1):
			if w[i-1] > j:
				k[i][j] = k[i-1][j]
			else:
				k[i][j] = max(k[i-1][j], k[i-1][j-w[i-1]]+p[i-1])
	return k[n][m]

def main():
	n, x = map(int, input().split())
	price = list(map(int, input().split()))
	pages = list(map(int, input().split()))
	print(knap(n, price, pages, x))
main()