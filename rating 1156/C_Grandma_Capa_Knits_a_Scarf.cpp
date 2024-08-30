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
	string s;
	cin >> n >> s;
	int ans = n + 1;
	for (int c = 0; c < 26; c++){
		int l = 0, r = n - 1, cnt = 0;
		while (l<=r){
			if (s[l] == s[r]){
				l++, r--;
			}
			else if(s[l] == char('a' + c)){
				cnt++;
				l++;
			}
			else if(s[r] == char('a' + c)){
				cnt++, r--;
			}
			else{
				cnt = n + 1;
				break;
			}
			
		}
		ans = min(ans, cnt);
	}
	if (ans == n+1){
		ans = -1;
	}
	cout << ans << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}