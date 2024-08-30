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
const int maxn = 2e5 + 100;
int n, t, a[maxn];
long long ps[maxn];

void solve(){
	cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			ps[i] = ps[i - 1] + a[i];
		}
		if(ps[n] != 0){
			cout << "No\n";
			return;
		}
		bool ok = 1;
		for(int i = 1; i <= n; i++){
			if(ps[i] < 0) ok = 0;
		}
		bool visited_zero = 0;
		for(int i = 1; i <= n; i++){
			if(ps[i] == 0) visited_zero = 1;
			else if(visited_zero) ok = 0;
		}
		if(ok) cout << "Yes\n";
		else cout << "No\n";
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}