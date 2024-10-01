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

void solve() {
    string s;
	cin >> s;
	int n = s.size();
	vector<int> a;
	for (int i =0; i<n; i++){
		if (s[i] == '0'){
			a.push_back(0);
		} else{
			a.push_back(1);
		}
	}
	
	int dest = n-1;
	int ans = 0;
	int seen = 0;
	bool first = false;
	for (int i = n-1; i>=0; i--){
		if (a[i] == 1){
			first = true;
			ans += (dest - i);
			
			if (dest - i != 0){
				ans += seen + 1;
			} 
			
			dest--;
		} else{
			if (first){
				seen++;
				first = false;
			}
			

		}

		

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