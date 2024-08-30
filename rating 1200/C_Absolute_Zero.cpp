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
	vector<int> a(n);

	for(int i =0; i<n; i++){
		cin >> a[i];
	}
	bool ok = true;

	for (int i =1; i<n; i++){
		if (a[i] %2 != a[0] %2){
			ok = false;
			break;
		}
	}
	if (!ok){
		cout << -1 << endl;
		return;
	}

	ranges::sort(a);
	cout << 32 << endl;
	cout << a[0];
	for (int i = 29; i>=0; i--){
		cout << " " << (1  << i);
	}
	cout << " " << 1 << endl;
	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}