#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> dp(n+1, 1e9);
	dp[0] = 0;
	for (int i = 1; i <= n; ++i){
		string k = to_string(i);
		for (int j = 0; j < k.size(); j++){
			if (k[j] != '0'){
				int d = k[j] - '0';
				dp[i] = min(dp[i],1+ dp[i-d]);
			}
		}
	}
	// for (int i : dp){
	// 	cout << i << " ";
	// }
	// cout << endl;
	cout << dp[n] << endl;
	return 0;
}
