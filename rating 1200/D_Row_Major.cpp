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
	int n;
	cin >> n;
	if (n == 1){
		cout << "a" << endl;
		return;

	}

	if (n == 2){
		cout << "ab" << endl;
		return;
	}
	if (n==3){
		cout << "aba" << endl;
		return;
	}
	int div = 30;

	for (int i =1; i<26; i++){
		if (n % i != 0){
			div = i;
			break;
		}
	}

	
	string s = "";
	for (int i =0; i<n; i++){
		char help = ('a' + (i % (div)));
		s += help;
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