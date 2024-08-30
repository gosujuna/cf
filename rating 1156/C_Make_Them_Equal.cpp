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
	ll n;
	cin>>n;
	char c;
	cin >> c;
	string s;
	cin >> s;
	vector<int> ans;
	bool ok = true;
	for(auto x:s){
		if (x!= c){
			ok = false;
		}
	}
	if (!ok){
		for (int i = 1; i < n + 1;i++){
			ok = true;
			for (int j = i; j < n + 1; j++){
				ok &= (s[j - 1] == c);
				j += i - 1;

			}
			if (ok){
				ans.push_back(i);
				break;
			}	
		}
		if (!ok){
			ans.push_back(n);
			ans.push_back(n - 1);
		}
		

	}
	cout << sz(ans) << endl;
	for(auto& x:ans){
		cout << x << " ";
	}
	cout << endl;
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