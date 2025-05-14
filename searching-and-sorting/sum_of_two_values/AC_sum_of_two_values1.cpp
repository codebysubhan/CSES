#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);


	int n, k;
	cin >> n;
	cin >> k;

	// vector<int> vec(n);

	// for (int &i : vec)	cin >> i;

	// int left = 0;
	// int right = n-1;

	// // sort(vec.begin(), vec.end());

	// while (left < right){
	// 	if ((vec[left] + vec[right]) < k){
	// 		++left;
	// 	}
	// 	else if ((vec[left] + vec[right]) > k){
	// 		--right;
	// 	}
	// 	else if ((vec[left] + vec[right]) == k){
	// 		cout << left+1 << " " << right+1 << endl;
	// 		return 0;
	// 	}
	// }
	// cout << "IMPOSSIBLE" << endl;


	vector<pair<int, int>> vec(n, {0, 0});

	for (int i = 0; i < n; ++i){
		cin >> vec[i].first;
		vec[i].second = i;
	}

	// for (pair<int, int> p : vec){
	// 	cout << p.first << " : " << p.second << endl;;
	// }

	sort(vec.begin(), vec.end());

	int left = 0;
	int right = n-1;

	while (left < right){
		if ((vec[left].first + vec[right].first) < k){
			++left;
		}
		else if ((vec[left].first + vec[right].first) > k){
			--right;
		}
		else if ((vec[left].first + vec[right].first) == k){
			cout << vec[left].second+1 << " " << vec[right].second+1 << endl;
			return 0;
		}
	}
	cout << "IMPOSSIBLE" << endl;




	return 0;
}