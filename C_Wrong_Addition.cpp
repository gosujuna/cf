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
	ll a, s;
	cin >> a >> s;
	vector<int> b;

	while (s){
		int x = a%10;
		int y = s % 10;
		if (x<= y)
			b.emplace_back(y - x);
		else {
			s /= 10;
			y += 10 * (s % 10);
			if (x<y && y>=10 && y<= 19){
				b.emplace_back(y - x);
			} else{
				cout << -1 << endl;
				return;
			}
		}
		a /= 10;
		s /= 10;
	}

	if (a)
		cout << -1 << endl;
	else{
		while (b.back() == 0){
			b.pop_back();
		}
		for (int i = sz(b) - 1; i >= 0; i--){
			cout << b[i];
		}
		cout << endl;
	}
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