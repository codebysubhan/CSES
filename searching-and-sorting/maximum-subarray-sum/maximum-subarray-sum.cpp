#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    // kadane algorithm
    long long int max_sum = INT_MIN;
    long long int curr_sum = 0;

    for (int i = 0; i < n; ++i) {
        curr_sum = max(vec[i], curr_sum + vec[i]);
        max_sum = max(max_sum, curr_sum);
    }

    cout << max_sum << "\n";
    return 0;
}
