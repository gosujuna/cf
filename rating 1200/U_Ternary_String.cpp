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
	string s;
	cin >> s;
	int n = sz(s);
	
	int minlen = n+1;
	int a=-1, b=-1, c=-1;
	for (int i =0; i<n; i++){
		if (s[i] == '1'){
			a = i;
		}

		if (s[i] == '2'){
			b = i;
		}

		if (s[i] == '3'){
			c = i;
		}

		//cout << a << b << c << endl;

		if (a > -1 && b > -1 && c>-1){
			int curmax = max(a,b);
			curmax = max(curmax,c);
			int curmin = min(a,b);
			curmin = min(curmin,c);


			minlen = min(minlen, curmax - curmin+1);
		}
	}

	if (minlen == n+1){
		cout <<0 << endl;
	} else{
		cout << minlen << endl;
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