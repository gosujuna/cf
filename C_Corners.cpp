#include <bits/stdc++.h>
//#include "zdebug.h"
using namespace std;
using ll = long long;
using str = string; // ben qi python
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

void solve(){
	// looknice;
	int n, m;
	cin >> n >> m;

	vector<vector<int>> a(n, vector<int>(m));
	int count = 0;

	for (int i = 0; i < n;i++){
		string s;
		cin >> s;
		for (int j = 0; j < m;j++){
			if (s[j] == '1'){
				a[i][j] = 1;
				count++;
			}
		}
	
	}

	if (count ==0){
		cout << 0 << endl;
		return;
	}

	bool three =1 ;
	bool two=1;

	if (count < n*m){
		two = 0;
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i][j] == 0){
				if (i+1 < n && a[i+1][j] == 0){
					three = 0;
					break;
				}
				if (j+1 < m && a[i][j+1] == 0){
					three = 0;
					break;
				}

				
				if (j+1 < m && i+1 < n &&a[i+1][j+1] ==0){
					three = 0;
					break;
				}
			}
			if (j+1 < m && i+1 < n &&a[i][j+1] == 0 && a[i+1][j] == 0){
					three = 0;
					break;
				}
		}
	}


	cout << count - two - three << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}