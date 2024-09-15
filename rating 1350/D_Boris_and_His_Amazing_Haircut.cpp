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

//void Main() {
// 	cin >> n;
// 	L(i, 1, n) {
// 		cin >> a[i];
// 	}
// 	L(i, 1, n) {
// 		cin >> b[i];
// 	}
// 	cin >> m;
	
// 	G.clear(), mp.clear();
// 	L(i, 1, m) {
// 		int x;
// 		cin >> x;
// 		G[x] += 1;
// 	} 
	
// 	L(i, 1, n) {
// 		if(a[i] < b[i]) {
// 			cout << "NO\n";
// 			return ;
// 		}
// 	}
	
// 	L(i, 1, n) {
// 		while(sz(mp) && mp.begin() -> first < b[i]) 
// //			cout << "erase " << mp.begin() -> first << endl, 
// 			mp.erase(mp.begin());
// 		if(a[i] != b[i] && !mp.count(b[i])) {
// 			mp[b[i]] = 1;
// 			int w = --G[b[i]];
// //			cout << "w = " << w << endl;
// 			if(w < 0) {
// 				cout << "NO\n";
// 				return ;
// 			}
// 		}
// 	}
	
// 	cout << "YES\n";
	
// }

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	bool ok = false;
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	for (int i =0; i<n; i++){
		cin >> b[i];
		if (b[i] > a[i]) ok = true;
	}
	
	int m;
	cin >> m;
	map<int,int> mp;
	map<int,int> g;
	for (int i =0; i<m; i++){
		int z;
		cin >> z;
		g[z]++;
	}
	if (ok){
		cout << "NO" << endl;
		return;
	} 

	for (int i =0; i<n; i++){
		while (sz(mp) > 0 && mp.begin() -> first < b[i]){
			mp.erase(mp.begin());
		}

		if (a[i] != b[i] && mp.count(b[i]) == 0){
			mp[b[i]] = 1;
			int z = --g[b[i]];
			if (z < 0){
				cout << "NO" << endl;
				return;
			}

		}
	}
	
	
	cout << "YES" << endl;

	
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}

// for (int i =0; i<n; i++){
// 		while (sz(mp) && mp.begin() -> first < b[i]){
// 			cout << "I is " << i << "erase " << mp.begin() -> first << endl; 
// 			mp.erase(mp.begin());
// 		}
// 		if (a[i] != b[i] && !mp.count(b[i])){
// 			mp[b[i]] =1;
// 			int w = --g[b[i]];
// 			cout << "w =" << w << "b is" << b[i] << " I is" << i << endl;
// 			if (w < 0){
// 				cout << "NO" << endl;
// 				return;
// 			}
// 		}
// 	}