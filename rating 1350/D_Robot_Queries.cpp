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


void solve(){
	// looknice;
	int n,q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<pair<int,int>> a;
	a.emplace_back(0,0);
	for (int i =0; i<n; i++){
		auto [x,y] = a.back();
		int newx = x;
		int newy = y;
		if (s[i] == 'R'){
			newx++;
		}
		if (s[i] == 'D'){
			newy--;
		}
		if (s[i] == 'L'){
			newx--;
		}
		if (s[i] == 'U'){
			newy++;
		}
		a.emplace_back(newx,newy);
	}
	map<pair<int,int>,vector<int>> mp;
	for (int i =0; i<n+1; i++){
		mp[a[i]].push_back(i);
	}
	auto find = [&](int x, int y, int l, int r){
		if (!mp.count({x,y})){
			return false;
		}
		auto &vec = mp[{x,y}];
		auto it = lower_bound(all(vec), l);
		return it != vec.end() && *it <= r;
	};

	while (q--){
		int x,y,l,r;
		cin >> x >> y >> l >> r;
		l--;
		auto newx = a[l].first + a[r].first - x;
		auto newy = a[l].second + a[r].second - y;
		if (find(x,y,0,l) || find(x,y,r,n) || find(newx,newy, l,r)){
			cout << "YES" << endl;
		} else{
			cout << "NO" << endl;
		}
	}


}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}