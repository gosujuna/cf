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
	
	vector<int> help(n,0);
	vector<int> notfriend(n,n-1);
	for (int i =0; i<m; i++){
		int a;
		int b;
		cin >> a >> b;
		a--;
		b--;
		if (b<a){
			swap(a,b);
		}
		
		notfriend[a] = min(notfriend[a], b-1);
	}
	int ans = 0;
	for (int i = n-1; i>=0; i--){
		if (i < n-1){
			notfriend[i] = min(notfriend[i], notfriend[i+1]);
		}
		ans += notfriend[i] - i + 1;
	}
	cout << ans << endl;





	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}