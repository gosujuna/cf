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

	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> cand;
	bool pos = false;
	int ind = 0;
	for (int i =0; i<n; i++){
		cin >> a[i];
		if (a[i] > 0){
			pos = true;
			ind = i + 1;
		}


	
	}
	vector<pair<int,int>> ans;

	if (pos){
		ans.emplace_back(ind,ind);
		ans.emplace_back(ind,ind);
		ans.emplace_back(ind,ind);
		ans.emplace_back(ind,ind);
		ans.emplace_back(ind,ind);
		if (n > 1){
			ans.emplace_back(2,ind);
			ans.emplace_back(2,ind);
		}
		if (n > 2){
			for (int i =3; i<=n; i++){
				ans.emplace_back(i,i-1);
				ans.emplace_back(i,i-1);
			}

		}
		

	} else{
		for (int i =n; i>=2; i--){
			ans.emplace_back(i-1,i);
		}
	}

	cout << sz(ans) << endl;
	for (auto [x,y] : ans){
		cout << x << " " << y << endl;
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