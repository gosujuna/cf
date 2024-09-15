#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<long long, __gnu_pbds::null_type, less<long long>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

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

 

void solve(){
	// looknice;
	i64 n;
	cin >> n;
	vector<pair<i64,i64>> a;
	for (int i =0; i<n; i++){
		int x,y;
		cin >> x >> y;
		a.emplace_back(y,x);
	}

	sort(all(a));
	ordered_set s;
	i64 ans = 0;
	for(auto p : a){
        ans += s.size() - s.order_of_key(p.second);
 
        s.insert(p.second);
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