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
	int n;
	cin >> n;
	int w=0,x=0,y=0,z=0;
	vector<int> deg(n);
	for (int i =0; i<n-1; i++){
		int a,b;
		cin >> a >> b;
		deg[a-1]++;
		deg[b-1]++;
	}
	string s;
	cin >> s;
	for (int i =1; i<n; i++){
		if (deg[i] == 1){
			if (s[i] == '?'){
				z += 1;
			} else if (s[i] == '0'){
				x += 1;
			} else{
				y += 1;
			}
		} else if (s[i] == '?'){
			w += 1;
		}
	}
	int ans = 0;

	if (s[0] == '1'){
		ans = x + (z+1)/2;
	}
	if (s[0] == '0'){
		ans = y + (z+1)/2;
	}
	if (s[0] == '?'){
		ans = max(x,y) + (z + (x == y ? w%2 : 0)) / 2; 
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