#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
// map is used instead of unordered_map because it guaratees O(logn) lookups
// using binary red black tree while unordered_map can cause O(n2) in worst
// case scenario
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    map<int, int> index_map;

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        if (index_map.count(x - vec[i])) {
            cout << index_map[x - vec[i]] + 1 << " " << i + 1 << endl;
            return 0;
        }
        index_map[vec[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
