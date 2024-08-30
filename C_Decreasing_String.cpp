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
	string s;
	cin >> s;
	int n;
	n = size(s); int pos;
	cin >> pos;
	pos--;
	int x,y;
	for (int i =0; i<n; i++){
		int len = n-i;
		if (pos < len){
			x=i;
			y=pos;
			break;
		}
		pos -= len;
	}
	string t;
	for (auto c: s){
		while (x>0 && !t.empty()  && c < t.back()){
			t.pop_back();
			x--;
		}
		t += c;
	}
	
	cout << t[y];


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}