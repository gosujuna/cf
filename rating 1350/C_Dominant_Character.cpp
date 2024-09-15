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
	int n;
	cin >> n;
	string s; 
	cin >> s;
	int ans = n+1;
	for (int i =0; i<n; i++){
		int a=0, b=0, c=0;
		int len = 0;
		
		
		for (int j = i; j<min(i+7,n); j++){
			if (s[j] == 'a'){
				a++;
			}
			if (s[j] == 'b'){
				b++;
			}
			if (s[j] == 'c'){
				c++;
			}
			len++;
			

			if (a>b && a>c && len >= 2){
				
				ans = min(ans, len);
			}

			


		}
		
		
	}

	cout << (ans == n+1 ? -1 : ans) << endl;

	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}