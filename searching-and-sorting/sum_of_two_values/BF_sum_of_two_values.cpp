#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t = 1; 
    // cin >> t; // For multiple test cases
    // while (t--) {
    //     // your code
    // }
    int n, x;
    cin >> n;
    cin >> x;
    // cout << n << x << endl;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }
    for (int i = 0; i < n; ++i){
        for (int j = i+1; j < n; ++j){
            if (vec[i]+vec[j] == x){
                flag = true;
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}