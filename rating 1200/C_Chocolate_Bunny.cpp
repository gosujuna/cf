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

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 	int n;
	 cin >> n;
	auto Ask = [&](int x, int y){
		cout << "? " << x + 1 << " " << y + 1 << endl;
		int z;
		cin >> z;
		return z;
	};
	vector<int> p(n);
	int i = 0;
	for (int j =1; j<n; j++){
		int pi_mod_pj = Ask(i,j);
		int pj_mod_pi = Ask(j,i);
		if (pi_mod_pj > pj_mod_pi){
			p[i] = pi_mod_pj;
			i = j;
		} else{
			p[j] = pj_mod_pi;
		}
	}
	p[i] = n;
	cout << "!";
	for (int i =0; i<n; i++){
		cout << " " << p[i];
	}
	cout << endl;
	
}