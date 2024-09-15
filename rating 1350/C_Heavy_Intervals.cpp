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
	// looknice; try and order the leements l,r by length lowest first and multiply it with the sorted cost array..
	int n;
	cin >> n;
	vector<pair<int,int>> a;
	vector<int> c(n);
	
	for (int i =0; i<n; i++){
		int l;
		cin >> l;
		a.push_back({l,1});
	}
	for (int i =0; i<n; i++){
		int r;
		cin >> r;
		a.push_back({r,-1});
	}
	sort(all(a));
	
	
	
	for (auto& i:c){
		cin >> i;
	}

	

	
	sort(all(c));
	vector<int> len,stk;
	for (auto [x,t] : a){
		if (t == 1){
			stk.push_back(x);
		} else{
			len.push_back(x - stk.back());
			stk.pop_back();
		}
	}
	sort(len.rbegin(), len.rend());
	int ans = 0;
	for (int i =0; i<n; i++){
		ans += c[i] * len[i];
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