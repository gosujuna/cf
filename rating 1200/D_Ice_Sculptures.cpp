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



signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 
	 vector<int> a(n);
	 for (int i =0; i<n; i++){
		cin >> a[i];
	 }
	 

	 

	 int ans = -1e9;

	 for (int x= 3; x<=n; x++){
		if (n%x){
			continue;
		}
		for (int i =0; i<n/x; i++){
			int s = 0;
			for (int j=i; j<n; j+= n/x){
				s += a[j];
			}
			ans = max(ans,s);
		}
	 }

	 cout << ans << endl;

}