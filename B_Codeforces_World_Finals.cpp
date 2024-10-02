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
vector<int> day{31,28,31,30,31,30,31,31,30,31,30,31};
void solve(){
	char dot;
	int D , M , Y;
	cin >> D >> dot >> M >> dot >> Y;
	int BD, BM, BY;
	cin >> BD >> dot >> BM >> dot >> BY;
	bool ok = false;
	auto check = [&](int d, int m, int y){
		if (m > 12){
			return;
		}
		if (d > day[m-1] + (m == 2 && y % 4 == 0)){
			return;
		}

		if (Y - y < 18){
			return;
		}
		if (Y - y > 18){
			ok = true;
			return;
		}
		if (M < m){
			return;
		}
		if (M > m){
			ok = true;
			return;
		}
		if (d <= D){
			ok = true;
			return;
		}

	};
	check(BD,BM,BY);
	check(BD,BY,BM);
	check(BM,BY,BD);
	check(BM,BD,BY);
	check(BY,BD,BM);
	check(BY,BM,BD);

	cout << (ok ? "YES" : "NO") << endl;
	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}