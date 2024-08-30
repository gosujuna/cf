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
	int n, k;
	cin >> n >> k;
	int l = -1, r = -1;
	map<int, int> cnt;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		cnt[x]++;
	}
	int last = -1;
	int begin = -1;
	for (auto[x,c]:cnt){
		if (c<k){
			continue;
		}
		if (last !=x-1){
			begin = x;
		}
		last = x;
		if(l==-1|| x-begin>r-l){
			l = begin;
			r = x;

		}
	}
	if (l==-1){
		cout << "-1" << endl;
	}
	else{
		cout << l << " " << r << endl;
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