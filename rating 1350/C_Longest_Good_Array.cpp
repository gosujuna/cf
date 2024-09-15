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

vector<int> a;


void calc(){
	int start = 1;
	int cnt = 1;
	a.push_back(1);
	while (start < 1e9 + 1e7){
		cnt++;
		start += cnt;
		a.push_back(start);
	}

	//debug(a);

}

void solve(){
	// looknice;
	int l, r;
	cin >> l >> r;
	int diff = r-l;
	auto ind = upper_bound(a.begin(), a.end(), diff) - a.begin();
	cout << ind+1 << endl; 

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 calc();
	 while (T--){
		solve();
	 }
}