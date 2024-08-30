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

	for (auto& i:a){
		cin >> i;
	}

	int x = -1;
	if (a[0] ==1){
		x = 0;
	} else if (a[n-1]==0){
		x = n;
	} else{
		for (int i = 0; i + 1 < n; i++){
			if (a[i] ==0 && a[i+1] == 1){
				x = i + 1;
			}
		}
	}
	for (int i = 0; i < x; i++){
		cout << i + 1 << " ";
	}
	cout << n + 1 << " ";
	for (int i = x; i < n; i++){
		cout << i + 1 << " ";
	}
	cout << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}