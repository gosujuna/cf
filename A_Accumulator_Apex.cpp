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
//#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int x , k;
	cin >> x >> k;
	vector all(0,vector<int>(2));

	for (int i =0; i<k; i++){
		int l;
		cin >> l;
		vector<int> a(l);
		for (int j =0; j<l; j++){
			cin >> a[j];
		}

		vector stk(0,vector<int>(2));
		for (int j = l-1; j>=0; j--){
			int x=0, y=0;
			x = min(a[j], 0LL);
			y = a[j];

			while (!stk.empty() && (y <=0 || y + stk.back()[0] >=0)){
				auto v = stk.back();
				stk.pop_back();
				x = min(x, y + v[0]);
				y += v[1];
			}
			if (y > 0){
				stk.push_back({x,y});
			}
		}
		all.insert(all.end(), stk.begin(), stk.end());
		
	}
	
	sort(all.rbegin(), all.rend());
	

	for (auto z : all){
		if (x + z[0] >= 0){
			x += z[1];
		} else{
			break;
		}
	}
	cout << x << endl;

	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}