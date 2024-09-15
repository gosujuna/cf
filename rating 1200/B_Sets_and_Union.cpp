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
	int n;
	cin >> n;
	vector<set<int>> s(n);


	set<int> S;

	for (int i =0; i<n; i++){
		int m;
		cin >> m;
		while (m--){
			int x;
			cin >> x;
			s[i].insert(x);
			S.insert(x);
		}
	}
	int ans = 0;

	for (int x : S){
		set<int> t;
		for (int i =0; i<n; i++){
			if (s[i].count(x)){
				continue;
			}
			for (int y: s[i]){
				t.insert(y);
			}
		}
		ans = max<int>(ans,t.size());
	}

	cout << ans << endl;

	
	
	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}