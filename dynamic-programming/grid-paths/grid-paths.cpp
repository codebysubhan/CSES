#include<iostream>
#include<vector>

using namespace std;

const int MOD = 1e9 + 7;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<vector<char>> grid(n, vector<char>(n, '0'));
	vector<vector<int>> dp(n, vector<int>(n));

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cin >> grid[i][j];
		}
	}
	if (grid[0][0] == '*'){
		cout << '0' << endl;
		return 0;
	}
	dp[0][0] = 1;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if (i == 0 && j != 0){
				if (grid[i][j] == '.')	dp[i][j] = dp[i][j-1];
			}
			else if (i!= 0 && j == 0){
				if (grid[i][j] == '.')	dp[i][j] = dp[i-1][j];
			}
			else if (i != 0 && j != 0){
				if (grid[i][j] == '.')	dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
			}
		}
	}

	// cout << "Printing: " << endl;
	// for (auto vec : dp){
	// 	for (auto i : vec){
	// 		cout << i << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;
	cout << dp[n-1][n-1] << endl;
	return 0;
}