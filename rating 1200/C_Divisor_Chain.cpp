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
vector<int> ans;
void dfs(int x, int pw) {
	if (x==1) {
		return;
	}
	if (x & 1) {
		ans.emplace_back((x - 1) * pw);
		dfs(x - 1, pw);
		return;
	}
	if (! (x & 1)){
		dfs(x / 2, pw * 2);
		ans.emplace_back(pw);
		return;
	}
}
int k;
void solve(){
	// looknice;
	
	cin >> k;
	ans.clear();
	ans.emplace_back(k);
	dfs(k, 1);
	cout << sz(ans) << endl;
	for (auto u : ans) cout << u << ' ';
	cout << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}