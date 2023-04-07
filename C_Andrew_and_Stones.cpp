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
	int n;
	cin>>n;
	vector<ll> a(n);
	for (auto& i:a){
		cin >> i;
	}

	ll fix = 0;
	ll sum = 0;

	bool not1 = false;

	if (n == 3){
		if (a[1] %2 == 1){
			cout << -1 << endl;
			return;
		} else{
			cout << a[1] / 2 << endl;
			return;
		}
	}

	for (int i = 1; i < (n - 1); i++){
		sum+= a[i]/2;
		if (a[i] %2 == 1){
			fix++;
		}
		if (a[i] > 1){
			not1 = true;
		}
	}

	cout << (not1 ? (sum + fix) : -1) << endl;
}




int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}