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

	int n =  s.size();
	
	int a = 0;
	int b = 0;
	for (int i =0; i<n; i++){
		if (s[i] == '1'){
			a++;
		}
		if (s[i] == '0') {
			b++;
		}
		
	}
	//cout << a << " " << b << endl;

	if (min(a,b) % 2 == 0){
		cout << "NET" << endl;
	} else{
		cout << "DA" << endl;
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