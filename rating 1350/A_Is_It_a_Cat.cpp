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


void solve(){
	// looknice;
	int n;
	cin >> n;
	string s;
	cin >> s;
	int m=100,e=100,o=100,w=100;
	bool ok = true;
	for (int i =0; i<n; i++){
		if (s[i] == 'm' || s[i] == 'M'){
			m = i;
		} 
		else if (s[i] == 'e' || s[i] == 'E'){
			e = i;
		} 
		else if (s[i] == 'o' || s[i] == 'O'){
			o = i;
		} 
		else if (s[i] == 'w' || s[i] == 'W'){
			w = i;
		} else{
			ok = false;
		}

		if (m > e || e > o || o > w){
			ok = false;
		}
	}
	if (ok && m < e && e < o && o < w && w == n-1 && m != 100 && e != 100 && o != 100){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
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