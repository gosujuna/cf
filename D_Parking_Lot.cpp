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

	int l, b , f;
	cin >> l >> b >> f; 
	int n;
	cin >> n;
	
	set<pair<int,int>> s;
	s.emplace(-b,-b);
	s.emplace (l + f, l + f);

	vector<pair<int,int>> a(n);

	for (int i = 0; i < n; i++){
		int t,x;
		cin >> t >> x;
		if (t == 1){
			int p = -1;
			for (auto it = next(s.begin()); it != s.end(); it++){
				if (it->first - prev(it)->second >= b + x + f){
					p = prev(it) -> second + b;
					break;
				}
			}
			if (p != -1){
				s.emplace(p,p+x);
				a[i] = {p, p + x};
			}
			cout << p << endl;
		} else{
			x--;
			s.erase(a[x]);
		}
	}

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
} 