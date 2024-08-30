#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using str = string; // ben qi python
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
	ll n;
	cin >> n;
	vector<ll> a(n);
	
	

	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	sort(all(a));
	ll help = 0;
	for (int i =0; i<(n-1); i++){
		help =  gcd( help,a[i+1] - a[i]);
	}

	help = max(1LL,help);
	if (n == 1){
		cout << 1 << endl;
		return;
	}

	

	

	bool ok = true;

	for (int i =n-1; i>0; i--){
		if (a[i-1] != a[i] - help){
			a.push_back(a[i] - help);
			ok = false;
			break;
		}
	}

	if (ok){
		a.push_back(a[0] - help);
	}

	

	

	


	

	
	ll num = accumulate(all(a),0LL);

	

	ll ans = (a[n-1]*(n+1) - num)/help;
	cout << ans << endl;

}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}