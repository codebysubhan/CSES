#include<iostream>
#include<vector>


using ll = long long;


using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin >> n;

	vector<ll> vec(n);
	for (ll &i: vec)	cin >> i;

	// for (int i : vec)	cout << i << " ";
	// cout << endl;


	ll ans = 0;
	for ( int i = 1; i < n; ++i){
		// cout << (vec[i-1] > vec[i]) << " ";
		if (vec[i-1] > vec[i]){
			ans += (vec[i-1] - vec[i]);
			vec[i] += (vec[i-1] - vec[i]);
		}
	}
	// cout << endl;
	cout << ans << endl;



	return 0;
}