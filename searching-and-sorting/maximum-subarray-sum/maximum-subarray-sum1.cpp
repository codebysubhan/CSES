#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin >> n;

	vector<long long int> vec(n);
	for ( int i = 0; i < n; ++i){
		cin >> vec[i];
	}

	long long int mx0 = 0;
	long long int mx1 = INT_MIN;
	// kadane algorithm
	for (int  i = 0; i < n; ++i){
		mx0 = max(vec[i], vec[i] + mx0);
		mx1 = max(mx0, mx1);
	}
	cout << mx1 << endl;

	return 0;
}