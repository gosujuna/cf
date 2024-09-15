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
	map<int,int> mp0;
	map<int,int> mp1;

	int sum0 = 0;
	int sum1 = 0;

	for (int i =0; i<n; i++){
		int x,y;
		cin >> x >>y;
		if (y == 0){
			mp0[x]++;
			sum0++;
			
		} else{
			mp1[x]++;
			sum1++;
			
		}
		
	}
	int ans = 0;

	for (auto [key,value] : mp0){
		ans += value * mp1[key]   * (sum0 - value);
		if (mp1.count(key+1) && mp0.count(key+2)){
			ans += value * mp1[key+1] * mp0[key+2];
		}
		
		
	}
	for (auto [key,value] : mp1){
		ans += value * mp0[key]   * (sum1 - value);
		if (mp0.count(key+1) && mp1.count(key+2)){
			ans += value * mp0[key+1] * mp1[key+2];
		}
		
		
	}


	// for (int i =0; i<a.size(); i++){
	// 	for (int j =i+1; j<a.size(); j++){
	// 		if ((a[i] - a[j]) == -2){
	// 			int mid = (a[i] + a[j]) / 2;
				
	// 			ans += mp1[mid] * mp0[a[i]] * mp0[a[j]];
	// 		}
	// 	}
	// }
	

	// for (int i =0; i<b.size(); i++){
	// 	for (int j =i+1; j<b.size(); j++){
	// 		if ((b[i] - b[j]) == -2){
	// 			int mid = (b[i] + b[j]) / 2;
				
				
	// 			ans += mp0[mid] * mp1[b[i]] * mp1[b[j]];
				
	// 		}
	// 	}
	// }

	
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