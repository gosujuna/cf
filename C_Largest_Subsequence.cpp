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
	string s;
	cin >> s;
	vector<int> a;
	for (int i =n-1; i>=0; i--){
		if (a.empty() || s[i] >= s[a.back()]){
			a.push_back(i);
		}
	}
	reverse(a.begin(), a.end());
	int j = 0;
	while ( j < sz(a) && s[a[0]] == s[a[j]]){
		j+=1;
	}
	int ans = a.size() - j;
	for (int i=0; i<a.size() - 1 -i; i++){
		swap(s[a[i]], s[a[a.size()-1-i]]);
	}
	if (!is_sorted(all(s))){
		ans = -1;
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