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
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n , v;
	 cin >> n >> v;
	 vector<double> a(n);
	 vector<double> b(n);

	 for (int i =0; i<n; i++){
		cin>> a[i];
		
	 }
	 for (int i =0; i<n; i++){
		cin>> b[i];
	 }
	 int help = accumulate(all(a),0LL);

	 double ans = 1000000.0;
	 for (int i =0; i<n; i++){
		ans = min(ans, double(b[i] / a[i]));
	 }

	 cout << min(ans * help,double(v)) << endl;


}