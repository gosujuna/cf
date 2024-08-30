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
	int cnt[10] = {};
	vector<int> a(n);
	for (int i = 0; i<n; i++){
		int x;
		cin >> x;
		cnt[x % 10]++;
	}
	vector<int> v;
	for (int i = 0; i < 10;i++){
		for (int j = 0; j < min(cnt[i], 3); j++){
			v.push_back(i);
		}
	}
	int s = v.size();
	for (int i = 0; i < s;i++){
		for (int j = i + 1; j < s; j++){
			for (int k = j + 1; k < s; k++){
				if ((v[i]+v[j]+v[k]) %10 ==3){
					cout << "YES" << endl;
					return;
				}
			}
		}
	}
	cout << "NO" << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}