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
	int m = 0;
	int n = s.size();
	vector<bool> prev(26, false);
	for (auto& i:s){
		if(prev[i-'a']){
			m+=2;
			for (int j =0; j<26;j++){
			prev[j] = false;
			}
			
		}
		else prev[i-'a']=true;
	}
	cout << n - m << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}