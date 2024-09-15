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
	int q;
	cin >> q;
	
	vector path(1,vector<int>(5));
	path[0][0] = 1;
	path[0][1] = 1;
	path[0][2] = 0;
	path[0][3] = 1;
	path[0][4] = 0;
	// cursum 0, maxsum 1, minsum 2, maxsofar = 3, minsofar = 4
	

	while (q--){
		string s;
		cin >> s;
		if (s == "+"){
			
			int u , w;
			cin >> u >> w;
			u--;
			vector<int> temp(5);
			temp[0] = path[u][0] + w;
			temp[1] = max(temp[0] - path[u][4], path[u][1]);
			temp[2] = min(temp[0] - path[u][3], path[u][2]);
			temp[3] = max(temp[0], path[u][3]);
			temp[4] = min(temp[0], path[u][4]); 
			path.push_back(temp);
		} else{
			int u,v,w;
			cin >> u >> v >> w;
			u--;
			v--;
			auto sett = path[v];
			if (sett[1] >= w && sett[2] <= w){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}

		}
	}
	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}