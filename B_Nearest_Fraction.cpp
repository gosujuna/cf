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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int x ,y ,n;
	cin >> x >> y >> n;
	

	int a = 0, b = 1;

	for (int j = 1; j <= n; j++){
		int t = (x * j / y);
		for (auto i : {t, t+1}){
			if (abs(x * b * j - i * y * b) < abs(x * b * j - a * y * j)){
				a = i;
				b = j;
			}
		}
	}
	cout << a << "/" << b << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}