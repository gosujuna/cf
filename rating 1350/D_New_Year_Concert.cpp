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
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	int ans = 0;
	int covered = -1;
	vector s(0,vector<int>(3));
	
	for (int i =0; i<n; i++){
		for (auto& t :s){
			t[2] = gcd(t[2], a[i]);
		}
		s.push_back({i,i,a[i]});
		int cnt = 0;
		for (int j =0; j<sz(s); j++){
			if (cnt > 0 && s[j][2] == s[cnt-1][2]){
				s[cnt-1][1] = s[j][1];
			} else{
				s[cnt++] = s[j];
			}
		}
		
		// cnt is # of segs? merge segs that have same right end
		s.resize(cnt);

		for (auto& t :s){
			int at = i - t[2] + 1;
			if (t[0] <= at && at <= t[1]){
				if (at > covered){
					ans += 1;
					covered = i;
				}
			}
		}

		cout << ans << " \n"[i==n-1];
		

	}
	
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}