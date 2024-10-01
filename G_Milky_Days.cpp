#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

//#define int long long
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
	int n,m,k;
	cin >> n >> m >> k;
	vector<pair<int,int>> v;
	int cur = 0;
	int ans = 0;

	auto work = [&] (int d){

		while (!v.empty() && cur < d){
			auto &[x,a] = v.back();
			if (cur > x + k - 1){
				v.pop_back();
				continue;
			}

			if (a >= m){
				int r = min({cur + a/m -1, x + k - 1, d - 1});
				ans += r - cur + 1;
				a -= (r - cur + 1) * m;
				cur = r + 1;
				continue;
			}
			int need = m;
			while (!v.empty() && need > 0){
				auto &[x,a] = v.back();
				if (cur > x + k - 1){
					v.pop_back();
					continue;
				}
				if (a <= need){
					need -= a;
					v.pop_back();
					
				} else{
					a -= need;
					need =0;
				}
			}
			if (need == 0){
				ans++;
			}
			cur++;
		}
		cur = d;
	};

	for (int i = 0; i<n; i++){
		int d,a;
		cin >> d >> a;
		work(d);
		v.push_back({d,a});

	}
	work(1e9);

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