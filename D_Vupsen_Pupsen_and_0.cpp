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

void solve() {
    int n;
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	vector<int> b(n);
	map<int,int> mp;

	for (int i =0; i<n; i++){
		if (mp.count(a[i])){
			b[mp[a[i]]] = 1;
			b[i] = -1;
			mp.erase(a[i]);
		} else{
			mp[a[i]] = i;
		}
	}

	while (mp.size() >= 2){
		auto [i,j] = *mp.begin();
		mp.erase(mp.begin());
		auto [x,y] = *mp.begin();
		mp.erase(mp.begin());
		b[j] = -x;
		b[y] = i;

	}

	if (!mp.empty()){
		auto [i,j] = *mp.begin();
		int k = !j;
		do {
			b[j] += a[k];
			b[k] -= i;
		} while (b[k] == 0 || b[j]==0);
	}
	for (int i =0; i<n; i++){
		cout << b[i] << " \n"[i==n-1];
	}
}

//-4 9 0 -2 5
// 2 -1 4 -3 6 -5 0
// 0 3 -2 5 -4 7 -6

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}