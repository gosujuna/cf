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
	vector<int> s(n), p(n);
	p[0] = -1;
	for (int i = 1; i < n;i++){
		cin >> p[i];
		p[i]--;
	}
	for (int i = 0; i < n; i++){
		char c;
		cin >> c;
		s[i] = c == 'W' ? 1 : -1;
	}
	for (int i = n - 1; i > 0;i--){
		s[p[i]] += s[i];
		
	}
	
	cout << count(s.begin(), s.end(), 0) << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}