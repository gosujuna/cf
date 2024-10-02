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
	int n, health, reg;
	cin >> n >> health >> reg;

	vector<int> pow(n);
	vector<int> dmg(n);

	for (int i =0; i<n; i++){
		cin >> pow[i] >> dmg[i];
	}

	vector<int> vis(n, -1);

	int curdmg = 0;
	int curh = health;
	int time = 0;

	vector<pair<int,int>> ans;
	while (1){

		curh = min(curh - curdmg  + reg, health);
		if (curh <= 0){
			break;
		}
		int i = -1;
		for (int j = 0; j<n; j++){
			if (curh * 100 <= pow[j] * health && (i == -1 || dmg[j] > dmg[i]) && vis[j] == -1){
				i = j;
			}
		}

		if (i == -1 && reg >= curdmg){
			cout << "NO" << endl;
			return;
		}

		if (i != -1){
			vis[i] = 1;
			curdmg += dmg[i];
			ans.emplace_back(time, i+1);
		}
		time++;

	}
	cout << "YES" << endl;
	cout << time << " " << sz(ans) << endl;
	for (auto [a, b] : ans){
		cout << a << " " << b << endl;

	}

	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}