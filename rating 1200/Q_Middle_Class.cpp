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
	ll n , x;
	cin >> n >> x;

	vector<ll> a(n);
	ll sum = 0;
	ll count = 1;
	ll minnum = 1e9;
	for (auto& i:a){
		cin >> i;	
	}

	int sz = sz(a);
	

	sort(all(a));
	sum += a[sz-1];
	

	if (a[sz-1] < x){
		cout << 0 << endl;
		return;
	}
	int i = sz-1;
	

	while (sum >= x * count && i >0){
		
		i--;
		
		sum += a[i];
		if (sum >=(count+1)*x){
			count++;
		} else{
			break;
		}
	}


	
	cout << count << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}