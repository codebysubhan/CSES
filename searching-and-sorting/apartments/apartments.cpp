#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	// fast I/O
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// taking input
	int n, m, k;
	cin >> n;
	cin >> m;
	cin >> k;

	// taking input into vector
	vector<int> vec(n);
	for (int &x : vec) cin >> x;
	// // printing the vector
	// for(int x : vec) cout << x << " ";
	// cout << endl;

	// taking input into vector
	vector<int> vec1(m);
	for (int &x : vec1) cin >> x;
	// // printing the vector
	// for(int x : vec1) cout << x << " ";

	// sorting the vectors
	sort(vec.begin(), vec.end());
	sort(vec1.begin(), vec1.end());
	
	// code logic
	int count = 0, i = 0, j = 0;
	while (i < n && j < m){
		while (!(vec1[j]-k <= vec[i] && vec[i] <= vec1[j]+k)){
			if (vec1[j] < vec[i])	++j;
			else	++i;
			// ++j;
			if (!(i < n && j < m)){
				cout << count << endl;
				return 0;
			}
		}
		++count;
		++i;
		++j;
	}
	cout << count << endl;
	return 0;
}