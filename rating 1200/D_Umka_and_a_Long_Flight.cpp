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
int f[50];
void solve(){
	// looknice;
	int n ,x , y;
	cin >> n >> x>> y;
	
	while (n>0){
		if (y <= f[n-1]){

		} else if (y > f[n]){
			y -= f[n];
		} else{
			cout << "NO" << endl;
			return;
		}
		swap(x,y);
		n -=1;
	}
	cout << "YES" << endl;

	
}
// 1, 1, 2 ,3, 5, 8, 13, 21..
signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 f[0] = f[1] = 1;
	 for (int i=2; i<50; i++){
		f[i] = f[i-2] + f[i-1];
	 }
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}