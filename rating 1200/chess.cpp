#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using str = string; // ben qi python

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
	int n, m;
	cin >> n >> m;

	auto Ask = [&](int x, int y) { 
		cout << "? " << x << " " << y << endl;
		cout.flush();
		int z;
		cin >> z;
		return z;
	};
	int a = Ask(1, 1);
	int x, y;

	if (a >= n){
		int b = Ask(1, a + 1);
		y = b + 1;
		x = a + 1;
	} else if (a>=m){
		int b = Ask(a + 1, 1);
		y = a + 1;
		x = b + 1;
	} else{
		int b = Ask(1, a + 1);
		int c = Ask(a + 1, 1);
		y = b + 1;
		x = c + 1;
	}
	

	cout << "!";
	cout << " " << y;
	cout << " " << x;
	cout << endl;
	cout.flush();
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}