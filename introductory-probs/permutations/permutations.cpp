// even first, then odd

#include<iostream>
#include<vector>
#include<set>


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin >> n;

	if (n == 2 || n == 3){
		cout << "NO SOLUTION" << endl;
		return 0;
	}

	set<int> s;
	for ( int i = 1; i <= n; ++i){
		if (i % 2){
			s.insert(i);
		}
		else{
			cout << i << " ";
		}
	}

	for ( int i : s){
		cout << i << " ";
	}

	cout << endl;


	return 0;
}