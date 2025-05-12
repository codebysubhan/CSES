#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Bottom-up approach -- iterative
int knap_sack(int n, int m, const vector<int> &price, const vector<int> &pages) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int c = 0; c <= m; ++c) {
            if (price[i - 1] > c) {
                dp[i][c] = dp[i - 1][c];
            } else {
                dp[i][c] = max(dp[i - 1][c], dp[i - 1][c - price[i - 1]] + pages[i - 1]);
            }
        }
    }

    return dp[n][m];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> price(n), pages(n);
    for (int &x : price) cin >> x;
    for (int &x : pages) cin >> x;

    cout << knap_sack(n, m, price, pages) << '\n';
    return 0;
}
