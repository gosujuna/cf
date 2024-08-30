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
	for(auto& i:a){
		cin >> i;
	}

	for (int i = n-1; i > 0; i-= 2){
		if (a[i] < a[i-1]){
			swap(a[i], a[i - 1]);
		}
	}
	cout << (is_sorted(all(a)) ? "YES" : "NO") << endl;

	// b: mid element is min, then a[i] > a[i-1] for prev and a[i] < a[i+1] for after
	// a: 
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