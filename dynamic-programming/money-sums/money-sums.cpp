#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; ++i)	cin >> vec[i];


	set<int> s;
	s.insert(0);
	for (int i : vec){
		set<int> curr(s);
		for (int j : curr){
			s.insert(i+j);
		}
	}

	// cout << s.size() - 1 << endl;
	// // cout << "Printing: " << endl;
	// for (int i : s){
	// 	if (i == 0)	continue;
	// 	cout << i << " ";
	// }
	// cout << endl;

	s.erase(0); // remove empty subset result once
	cout << s.size() << "\n";
	for (int i : s) cout << i << " ";


	return 0;
}