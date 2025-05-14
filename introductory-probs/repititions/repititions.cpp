#include<iostream>
#include<unordered_set>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	unordered_set<int> s;
	int size = 0;
	vector<char> vec;
	char ch;
	while (cin >> ch){
		vec.push_back(ch);
		++size;
	}

	// for(char i : vec){
	// 	cout << i << " ";
	// }
	// cout << endl;
	int curr_sum = 1;
	char prev = vec[0];
	for (int i = 1; i < size; ++i){
		if (vec[i] == prev){
			++curr_sum;
		}
		else{
			s.insert(curr_sum);
			curr_sum = 1;
		}
		prev = vec[i];
	}
	s.insert(curr_sum);
	// for (int i : s){
	// 	cout << i << " ";
	// }
	// cout << endl;
	int max = INT_MIN;
	for (int i : s){
		if (i > max)	max = i;
	}
	cout << max << endl;

	return 0;
}