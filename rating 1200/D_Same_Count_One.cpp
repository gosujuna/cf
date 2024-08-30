#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
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
	vector a(n,vector<int>(m));
	
	vector<int> sum(n);
	int tot =0;
	for (int i =0; i<n; i++){
		for (int j = 0; j<m; j++){
			cin >> a[i][j];
			tot += a[i][j];
			sum[i] += a[i][j];
		}
	}

	if (tot % n != 0){
		cout << -1 << endl;
		return;
	}

	vector<tuple<int,int,int>> ans;
	for (int j=0; j<m; j++){
		vector<int> zero,one;
		for (int i =0; i<n; i++){
			if (a[i][j] == 0 && sum[i] < tot /n){
				zero.push_back(i);
			}
			if (a[i][j] == 1 && sum[i] > tot/n){
				one.push_back(i);
			}
		}

		for (int k=0; k<min(zero.size(), one.size()); k++){
			int i0 = zero[k];
			int i1 = one[k];
			a[i0][j] = 1;
			a[i1][j] = 0;
			sum[i0]++;
			sum[i1]--;

			ans.emplace_back(i0,i1,j);
		}
	}

	cout << sz(ans) << endl;
	for (auto [x,y,z]: ans){
		cout << x+1 << " " << y+1 << " " << z+1 << endl;
 	}


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}