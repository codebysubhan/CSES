#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int INF = 1e9;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,x;
	cin >> n;
	cin >> x;

	vector<int> vec(n, 0);
	for (int &i : vec)	cin >> i;

    vector<int> dp(x+1, INF);
    dp[0] = 0;
    for (int i = 1; i <= x; ++i){
        for (int coin : vec){
            if (i >= coin){
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    // cout << "Printing: " << endl;
    // for (int i : dp){
    //     cout << i << " ";
    // }
    // cout << endl;
    if (dp[x] != INF){
        cout << dp[x] << endl;
        return 0;
    }
    cout << "-1" << endl;

	return 0;
}