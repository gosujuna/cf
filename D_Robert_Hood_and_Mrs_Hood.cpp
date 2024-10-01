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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int n,d,k;
	cin >> n >> d >> k;

	vector<int> L(n+1), R(n+1);

	for (int i =0; i<k; i++){
		int l,r;
		cin >> l >> r;
		l--;
		L[l]++;
		R[r]++;
	}
	for (int i =1; i<=n; i++){
		R[i] += R[i-1];
	}
	// end points seen so far?

	for (int i = n-1; i>=0; i--){
		L[i] += L[i+1];
	}
	// start points left to see 
	int mx = -1;
	int indmx = -1;
	int mn = n+1;
	int indmn = -1;
	for (int i =0; i<=n-d; i++){
		int v = R[i] + L[i+d];
		if (v > mx){
			mx =v;
			indmx = i+1;
		}
		if (v < mn){
			mn = v;
			indmn = i+1;
		}
	}
	// calculates the dual, or the max of intervals outside - min of intervals inside
	// calculats min of intervals outside - so maximum inside
	cout << indmn << " " << indmx << endl;

	
}



signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}