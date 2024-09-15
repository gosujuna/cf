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
	int n,k;
	cin >> n >> k;
	vector<int> x(k), c(k);
	for (int i =0; i<k; i++){
		cin >> x[i];
	}
	for (int i =0; i<k; i++){
		cin >> c[i];
	}
	if (x[0] < c[0]){
		cout << "NO" << endl;
		return;
	}
	for (int i =1; i<k; i++){
		if (x[i] - x[i-1] < c[i] - c[i-1]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;

	char lst = 'c';
	string s = "abc";
	int res =3;

	for (int i =0; i<k; i++){
		while (x[i] - sz(s) > c[i] - res){
			lst = lst == 'c' ? 'a' : lst + 1;
			s += lst;
		}
		while (s.size() < x[i]){
			s += 'a' + i + 3;
			res++;
		}
	}
	cout << s << endl;


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}