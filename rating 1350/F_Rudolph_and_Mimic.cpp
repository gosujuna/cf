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

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()



void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	vector<int> cnta(10);
	for (int i =0; i<n; i++){
		cnta[a[i]]++;
	}
	vector<int> b(n);
	auto cntb = cnta;
	while (cnta == cntb){
		cout << "- " << 0 << endl;
		cntb.assign(10,0);
		for (int i =0; i<n; i++){
			cin >> b[i];
			cntb[b[i]]++;
		}
	}
	int v=0;
	while (cntb[v] <= cnta[v]){
		v++;
	}
	debug(cnta,cntb);
	vector<int> p;
	for (int i =0; i<n; i++){
		if (b[i] != v){
			p.push_back(i+1);
		}
	}
	cout << "- " << p.size();
	for (auto x : p){
		cout << " " << x;
	}
	cout << endl;
	n = cntb[v];

	vector<int> c(n);
	for (int i =0; i<n; i++){
		cin >> c[i];
	}

	while (count(all(c), v) == n){
		cout << "- " << 0 << endl;
		for (int i =0; i<n; i++){
			cin >> c[i];
		}
	}
	for (int i =0; i<n; i++){
		if (c[i] != v){
			cout << "! " << i + 1 << endl;
			return;
		}
	}



	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}