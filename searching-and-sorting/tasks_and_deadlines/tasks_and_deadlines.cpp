#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;

bool custom_comparator(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first;         // Ascending by first
}

int main(){
	// fast I/O
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// taking input
	int n;
	cin >> n;
	vector<pair<int, int>> vec(n);
	for (pair<int, int> &x : vec){
		cin >> x.first;
		cin >> x.second;
	}
	// // printing output
	// for (pair<int, int> x : vec){
	// 	cout << x.first << " " << x.second << endl;
	// }

	// logic
	long long int r = 0, fin = 0;
	sort(vec.begin(), vec.end(), custom_comparator);
	for (pair<int, int> x : vec){
		fin += x.first;
		r += (x.second - fin);
	}
	cout << r << endl;

	return 0;
}

