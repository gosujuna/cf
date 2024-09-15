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
	vector<int> b(n);
	// build prefix and suffix sums??
	map<int,int> mp;
	for (int i =0; i<n; i++){
		cin >> a[i];

	}
	b = a;
	sort(all(b));
	for (int i =0; i<n; i++){
		if (mp.count(b[i]) == 0){
			mp[b[i]] = i;
		}
	}
	
	

	vector<int> pref(n+1,0);
	vector<int> suff(n+1,0);
	for (int i =0; i<n; i++){
		pref[i+1] = pref[i] + b[i]; 
		
	}
	

	for (int i =n-1; i>=0; i--){
		suff[i]= suff[i+1] + b[i];
	}
	// debug(pref,suff);
	
	for (int j =0; j<n; j++){
		int ans = 0;
		int i = mp[a[j]];
		int val = a[j];
		// cout << "i" << i << endl;
		
		ans += abs((i+1) * val - pref[i+1]);
		//cout << abs((i+1) * val - pref[i+1]) << " " << abs(suff[i+1] - val*(n - i-1)) << endl;
		ans += abs(suff[i+1] - val*(n - i-1));
		ans += n;

		cout << ans << " ";
		
	}
	

	// (1-3) + (4-3) + (3-3)

	cout << endl;
	// (1-4) + (10-4) + (100-4) + (1000-4)

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}