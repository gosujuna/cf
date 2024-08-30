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
	int n, m;
	cin >> m >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		--a[i];

	}

	sort(all(a));
	vector<int> b;
	for (int i = 0; i < n; i++){
		int diff = a[(i + 1) % n] - a[i];
		if (diff<=0){
			diff += m;
		}
		b.push_back(diff - 1);
	}
	sort(b.rbegin(), b.rend());
	debug(b);

	int safe=0;
	for (int i = 0; i < n; i++){
		int num = b[i] - 4 * i;
		if (num >= 1){
			safe += max(1, num - 1);
		}
	}
	cout << m - safe << endl;
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