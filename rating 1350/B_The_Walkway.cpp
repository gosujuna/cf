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
	int n, m, d;
	cin >> n >> m >> d;
	vector<int> s(m+2);
	for (int i =1; i<=m; i++){
		cin >> s[i];
	}
	s[0] = -d + 1;
	s[m+1] = n+1;
	int sum = 0;
	for (int i =1; i<=m+1; i++){
		sum += (s[i] - s[i-1] - 1) / d;

	}
	int ans =n+1;
	int cnt = 0;
	for (int i =1; i<=m; i++){
		int res = sum;
		res -= (s[i] - s[i-1] - 1) /d;
		res -= (s[i+1] - s[i] - 1)/d;
		res += (s[i+1] - s[i-1] - 1)/ d;
		res += (m-1);
		if (res < ans){
		ans = res;
		cnt = 1;
		}
		else if (res == ans){
			cnt++;
		}
	}

	
	cout << ans << " " << cnt << endl;


	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}