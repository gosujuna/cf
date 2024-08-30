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
	cin >> n;

	vector<int> b(n-1);

	for (int i =0; i<n-1; i++){
		cin >> b[i];
	}
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
      a[i] = (i == 0 ? 0 : b[i - 1]) | (i == n - 1 ? 0 : b[i]);
    }
	bool ok = true;

	for (int i =0; i<n-1; i++){
		ok &= (b[i] == (a[i] & a[i+1]));
	}

	if (ok){
		for (int i =0; i<n; i++){
			cout << a[i] << " \n"[i == n-1];
		}
	} else{
		cout << -1 << endl;
	}


	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}