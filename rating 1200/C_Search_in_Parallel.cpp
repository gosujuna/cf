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
	cout << n << endl;
	for (int i =0; i<n; i++){
		cin >> a[i];
		if (a[i] > a[2]){
			cout << ??
		} else{
			cout << 
		}

	}
	int n, s1, s2;
	cin >> n >> s1 >> s2;

	vector<int> r(n);
	for (int i =0; i<n; i++){
		cin >> r[i];
	}

	vector<int> p(n);
	iota(all(p),0);

	sort(all(p), [&](int i, int j){
		return r[i] > r[j];
	});

	vector<int> a,b;

	for (auto i: p){
		if ((sz(a) + 1) * s1 < (sz(b) +1) * s2){
			a.push_back(i+1);
		} else{
			b.push_back(i+1);
		}
	}

	cout << sz(a);
	for (auto &x:a){
		cout << " " << x;
	}
	cout << endl;
	cout << sz(b);
	for (auto &y: b){
		cout << " " << y;
	}
	cout << endl;
	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}