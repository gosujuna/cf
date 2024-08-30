#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	bool yes = false;
	char c;
	int duo = 0, solo = 0;
	int arr[n][m];
	for (int i = 0; i<n; i++){
		for (int j =0; j<m; j++){
			cin >> c;
			if (c == '.'){
				arr[i][j] = 0;
			} else{
				arr[i][j] = 1;
			}
		}
	}

	for (int i =0; i<n; i++){
		for (int j =0; j<m-1; j++){
			if (arr[i][j] == 0 && arr[i][j+1] == 0){
				duo += 1;
				arr[i][j+1] = 1;
			} else if (arr[i][j] == 0){
				solo += 1;
			}
		}

		if (arr[i][m-1] == 0){
			solo += 1;
		}
	}

	if (y > x*2){
		cout << (solo+duo*2) * x << endl;
	} else{
		cout << duo * y + solo * x << endl;
	}



	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}