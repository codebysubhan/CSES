#include<iostream>
#include<set>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin >> n;

	int val;
	set<int> s;
	for ( int i = 0; i < n; ++i){
		cin >> val;
		s.insert(val);
	}
	cout << s.size() << endl;



	return 0;
}

