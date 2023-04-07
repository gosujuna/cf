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
	vector<string> a(n);
	
	vector<int> count(144);
	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		a[i] = s;
		count[(s[0] - 'a') * 12 + (s[1] - 'a')]++;
	}
	ll ans = 0;
	for (string s:a){
		for (int j = 0; j < 12; ++j){
			if (s[0] - 'a' == j)
				continue;
			ans += count[j * 12 + (s[1] - 'a')];
		}
		for (int j = 0; j < 12; ++j){
			if (s[1] - 'a' == j)
				continue;
			ans += count[(s[0] - 'a') * 12 + j];
		}
	}
	cout << ans / 2 << endl;

	//ll ans = 0;
	

}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}