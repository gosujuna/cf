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
	int n;
	cin >> n;
	string s1,s2;
	cin >> s1 >> s2;

	if (n <= 2){
		cout << 0 << endl;
		return;
	}
	int ans = 0;

	for (int i =1; i<n-1; i++){
		if (s1[i] == '.' && s1[i-1] == '.' && s1[i+1] == '.' && s2[i] == '.' && s2[i-1] == 'x' && s2[i+1] == 'x'){
			ans++;
		}
		if (s1[i] == '.' && s1[i-1] == 'x' && s1[i+1] == 'x' && s2[i] == '.' && s2[i-1] == '.' && s2[i+1] == '.'){
			ans++;
		}
	}
	cout << ans << endl;


	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}