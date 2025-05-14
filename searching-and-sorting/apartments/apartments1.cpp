#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);


	int n, m, k;

	cin >> n;
	cin >> m;
	cin >> k;

	vector<int> desired(n);
	vector<int> actual(m);

	for (int &i : desired)	cin >> i;
	for (int &i : actual)	cin >> i;

	sort(desired.begin(), desired.end());
	sort(actual.begin(), actual.end());

	// cout << "Printing: " << endl;
	// for (int i : desired){
	// 	cout << i << " ";
	// }
	// cout << endl;
	// for (int i : actual){
	// 	cout << i << " ";
	// }
	// cout << endl;

	int i = 0,j = 0,ans = 0;

	while (i < m){
		if (!((desired[j] - k <= actual[i]) && (desired[j] + k >= actual[i]))){
			if (actual[i] < desired[j]){
				++i;
			}
			else if (actual[i] > desired[j]){
				++j;
				if (j == n){
					cout << ans << endl;
					return 0;
				}
			}
		}
		else {
			++ans;
			++i;
			++j;
			if (j == n){
				cout << ans << endl;
				return 0;
			}
		}


	}



	cout << ans << endl;
	


	return 0;
}