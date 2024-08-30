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

	for (int i =0; i<n-1; i++){
		if (s[i] == s[i+1]){
			if (s[i] == 'a'){
				s.insert(i+1,1,'b');
				cout << s << endl;
				return;
			} else{
				s.insert(i+1,1,'a');
				cout << s << endl;
				return; 
			}
		}
	}

	if (s[0] != 'a'){
		cout << 'a' + s << endl;
	} else{
		cout << 'b' + s << endl;
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