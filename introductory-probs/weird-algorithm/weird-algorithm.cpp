#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	long long int n;
	cin >> n;

	cout << n << " ";	
	while (n > 1){
		if (n % 2){
			n = n * 3;
			++n;
		}
		else{
			n = n / 2;
		}
		cout << n << " ";
	}
	cout << endl;

	return 0;
}