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
	cin>>n;
	ll s=0;
	ll test = 0;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
		if (i %2 ==0){
			test += a[i];
		} else{
			test -= a[i];
		}
	}

	if (s%2 ==0){
		vector<pair<int,int>> ans;
		for (int i = 0; i < n; i+=2){
			if (a[i] == a[i+1]){
				ans.emplace_back(i, i + 1);
			} else{
				ans.emplace_back(i, i);
				ans.emplace_back(i + 1, i + 1);
			}
		}
		cout << sz(ans) << endl;
		for (auto &i:ans){
			cout << i.first+1 << " " << i.second + 1 << endl;
		}
		
	} else{
		cout << -1 << endl;
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