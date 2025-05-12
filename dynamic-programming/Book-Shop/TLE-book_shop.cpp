#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// memoization : top-down approach
int knap_sack(int n, int m, vector<int> price, vector<int> pages, map<pair<int, int>, int> &data){
	pair<int, int> p = {n, m};
	if (data.find(p) != data.end()){
		return data[p];
	}
	if (n < 0 || m == 0){
		// cout << m << " --- "<< endl;
		return 0;}
	int val1 = 0, val2 = 0;
	if (!(price[n] > m)){
		val1 = max(knap_sack(n-1, m, price, pages, data),knap_sack(n-1 , m-price[n], price, pages, data) + pages[n]);
		// cout << "+++1 " << val1 << endl;
	}
	else {
		val2 = knap_sack(n-1, m, price, pages, data);
		// cout << "+++2 " << val2 << endl;
	}
	data[p] = max(val1, val2);
	return max(val1, val2);
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// taking input
	int n, x;
	cin >> n;
	cin >> x;

	vector<int> vec1(n);
	vector<int> vec2(n);
	for (int &i : vec1)	cin >> i;	// price array
	for (int &i : vec2)	cin >> i;	// pages array --> print max no of pages
	// // printing
	// for (int i : vec1)	cout << i <<" ";
	// cout << endl;
	// for (int i : vec2)	cout << i <<" ";
	// cout << endl;

	// logic
	map<pair<int, int>, int> p;
	long int ans;
	ans = knap_sack(n-1, x, vec1, vec2, p);
	cout << ans << endl;


	return 0;
}
