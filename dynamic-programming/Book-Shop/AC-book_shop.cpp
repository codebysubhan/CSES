#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// bottom up approach -- iterative(it's better)
int knap_sack(int n, int m, vector<int> price, vector<int> pages, vector<vector<int>> &dp){

	for (int i = 0; i < m; ++i)	dp[0][i] = 0;
	for (int i = 0; i < n; ++i)	dp[i][0] = 0;

	for (int i = 1; i < n; ++i){
		for (int c = 1; c < m; ++c){
			if (price[i] > c){
				dp[i][c] = dp[i-1][c];
			}
			else{
				dp[i][c] = max(dp[i-1][c], dp[i-1][c-price[i]] + pages[i]);
			}
		}
	}
	cout << "Printing: " << endl;
	for (vector<int> vec : dp){
		for (int i : vec){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// taking input
	int n, m;
	cin >> n;
	cin >> m;

	vector<int> vec1(n);
	vector<int> vec2(n);
	for (int &i : vec1)	cin >> i;	// price array
	for (int &i : vec2)	cin >> i;	// pages array --> print max no of pages
	// // printing
	// for (int i : vec1)	cout << i <<" ";
	// cout << endl;
	// for (int i : vec2)	cout << i <<" ";
	// cout << endl;

	// logic
	vector<vector<int>> dp(n, vector<int>(m));
	long int ans = knap_sack(n, m, vec1, vec2, dp);
	cout << ans << endl;

	return 0;
}
