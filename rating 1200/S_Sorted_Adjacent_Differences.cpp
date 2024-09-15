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
	int n;
	cin >> n;
	vector<int> a(n);

	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	sort(all(a));

	int mid = (sz(a) / 2);
	vector<int> ans;
	for (int i =0; i<n; i++){
		ans.push_back(a[mid]);
		
		if (i % 2 == 0){
			mid -= (i+1);
		} else{
			mid += (i+1);
		}
	}

	for (int i =0; i<n; i++){
		cout << ans[i] << " ";
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