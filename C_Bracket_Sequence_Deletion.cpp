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
	vector<int> a(n);
	string s;
	cin >> s;

	for (int i = 0; i < n; i++){
		if (s[i] == '('){
			a[i] = 0;
		} else {
			a[i] = 1;
		}
	}

	int point = 0;
	int x =0;
	
	while (point +1 < n){
		if (a[point] == 0 || (a[point] == 1 && a[point +1] == 1)){
			point += 2;

		} else {
			int r = point + 1;
			while (r < n && a[r] != 1){
				r++;
			}
				if (r==n){
					break;
				}
				point = r + 1;
			}
		x++;
	}
		
	

	cout << x << " "<< n-point << endl;
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