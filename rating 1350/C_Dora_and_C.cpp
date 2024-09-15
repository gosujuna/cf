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
template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

void solve(){
	// looknice;
	int n, a, b;
	cin >> n >> a >> b;
	if (a > b){
		swap(a,b);
	}
	int d  = gcd(a,b);
 
	
	//cout << "d" << d << endl;
	if (a == b){
		d = a;
	}
 
	vector<int> c(n);
	set<int> s;
	for (int i =0; i<n; i++){
		int help;
		cin >> help;
		 help %= d;
		c[i]= help;
		s.insert(help);
	}
	sort(all(c));
	int x ,y;
	
	int ans = 1e9;
	for (int i = 0; i<n; i++){
		 int min_value = *s.begin();
    	int max_value = *s.rbegin();
    
        int help = max_value - min_value;
		s.insert(min_value+d);
		s.erase(min_value);
		ans = min(help,ans);
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