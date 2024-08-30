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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++){
		int test;
		cin>> test;
		a[i]=test;
		b[i] = test;
	}
	if (n >= 2 * x){
		cout << "YES" << endl;
		return;
	}
	sort(all(b));

	bool can = true;
	for (int i = n-x; i < x; i++){
		if (a[i] != b[i]){
		can = false;
		break;
		}
		
	}

	cout << (can ? "YES" : "NO") << endl;
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