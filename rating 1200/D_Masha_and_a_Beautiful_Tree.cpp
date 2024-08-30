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
int arr[300300];
int help(int l, int r){
	if (r - l == 1) return 0;
	int mid = (l + r) >> 1;
	int mal = *max_element(arr + l, arr + mid);
	int mar = *max_element(arr + mid, arr + r);
	int ans = 0;
	if (mal > mar) {
		++ans;
		for (int i = 0; i < (mid - l); ++i)
			swap(arr[l + i], arr[mid + i]);
	}
	return help(l, mid) + help(mid, r) + ans;

}

void solve(){
	// looknice;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int ans = help(0, n);
	if (is_sorted(arr, arr+n)){
		cout << ans << endl;
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