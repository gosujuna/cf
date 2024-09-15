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
	set<int> help;
	set<int> main;
	map<int,pair<int,int>> mp;
	int n;
	cin >> n;
	bool dup = false;
	for (int i =0; i< n/2; i++){
		int z;
		cin >> z;
		if (help.count(z)){
			dup = true;
		}
		help.insert(z);
		mp[i] = make_pair(z,-1);

		
	}
	if (dup){
		cout << -1 << endl;
		return;
	}

	for (int i = 1; i<=n; i++){
		if (help.count(i) == 0){
			main.insert(i);
		}
	}
	
	int cnt = 0;

	for (auto it = mp.rbegin(); it != mp.rend(); it++){
		auto value = it->second.first;
		auto it2 = main.lower_bound(value);
		if (it2 == main.begin()){
			cout << -1 << endl;
			return;
		}
		--it2;
		it->second.second = *it2;
		main.erase(it2); 

	}

	for (auto [key,value] : mp){
		if (value.first > value.second){
			swap(value.first,value.second);
		}
		cout << value.first << " " << value.second << " ";
	}
	cout << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}