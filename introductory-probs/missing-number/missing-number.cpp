#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin >> n;

	unordered_set<int> set;
	for ( int i = 1; i <= n; ++i ){
		set.insert(i);
	}
	unordered_set<int> set_inp;
	for ( int i = 0; i < n-1; ++i ){
		int val;
		cin >> val;
		set_inp.insert(val);
	}
	// // printing
	// cout << " Set: "  << endl;
	// for (int i : set){
	// 	cout << i << " ";
	// }
	// cout << endl;
	// cout << " Inp Set: "  << endl;
	// for (int i : set_inp){
	// 	cout << i << " ";
	// }
	// cout << endl;
	// vector<int> vec(n);
	// for (int i = 0; i < n; ++i)	cin >> vec[i];
	for (int i : set){
		if (!set_inp.count(i)){
			cout << i << endl;
			return 0;
		}
	}


	return 0;
}