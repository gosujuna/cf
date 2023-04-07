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
	int n, a, b;
	cin >> n >> a >> b;

	

	if (abs(a-b) >1 || a+b > n-2){
		cout << -1<<endl;
		return;
	}

	vector<int> p(n+1);
	iota(all(p), 0);


	if (a==b){
		for (int i = 1; i <= a; i++){
			swap(p[2 * i], p[2 * i + 1]);
		}
	} else if (a<b){
		for (int i = 1; i <= b; i++){
			swap(p[2 * i - 1], p[2 * i]);
		}
	} else{
		for (int i = 1; i <= a; i++){
			swap(p[n - 2 * i + 2], p[n - 2 * i + 1]);
		}
	}

	for (int i = 1; i <= n; i++){
		cout << p[i] << " ";
	}
	cout << endl;
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