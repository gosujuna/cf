#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
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
	int n ,m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(n);
	a[0] = 1;
	for (int i =1; i<n; i++){
		cin >> a[i];
	}
	sort(all(a));
	priority_queue<int,vector<int>, greater<int>> pq;
	for (int i =0; i<n; i++){
		cin >> b[i];
		pq.push(b[i]);
	}
	int ans = 0;

	for (int i =0; i<n; i++){
		bool ok = true;
		while (!pq.empty() && ok){
			int c = pq.top();

			if (c <= a[i]){
				ans++;
				pq.pop();
				
			} else{
				pq.pop();
				ok = false;
			}

		}

		
		
	}
	cout << ans << endl;

	
	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}

