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

	int ans = 9;
	int t1 = 0;
	int t2 = 0;
	int s1 = 0;
	int s2 = 0;


	for (int i = 0; i < 10; i++){
		if (i%2 ==0){
			t1 += s[i] != '0';
			
		} else{
			t2 += s[i] == '1';
		}

		if (t1 >t2 +(10-i)/2)
			ans = min(ans, i);
		if (t2>t1 + (9-i)/2){
			ans = min(ans, i);
		}
	}

	for (int i = 0; i < 10; i++){
		if (i%2 ==0){
			s1 += s[i] == '1';
			
		} else{
			s2 += s[i] != '0';
		}

		if (s1 >s2 +(10-i)/2)
			ans = min(ans, i);
		if (s2>s1 + (9-i)/2){
			ans = min(ans, i);
		}
	}

	cout << ans + 1 << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}