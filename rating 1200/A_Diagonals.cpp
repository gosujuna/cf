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
	int n, k;
	cin >> n >> k;
	int ans = 0;
	if (k==0){
		cout << 0 << endl;
		return;
	}
	bool yes = true;
	while (k>0){
		if (yes){
			k -= n;
			ans++;
			n--;
			yes = false;
		} else{
			yes = true;
			k-= n;
			ans++;
		}
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