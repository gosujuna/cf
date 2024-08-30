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
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	if (is_sorted(all(a))){
		cout << 0 << endl;
		return;
	}

	int par = a[n - 1] % 2;
	int par2 = a[0] % 2;
	vector<int> x;
	vector<int> y;

	if (par == par2){
	for (int i = 0; i < n - 1; i++){
		if (a[i] %2 == par){
			x.push_back(i+1);
		} else{
			y.push_back(i+1);
		}
	}

	int ans = sz(x) + sz(y);
	cout << ans << endl;

	


	for (int i = 0; i<sz(x); i++){
		cout << x[i] <<  " " << n << endl;
	}

	for (int i = 0; i < sz(y); i++){
		cout << 1 << " " << y[i] << endl;
	}

	} 
	else{
		for (int i = 1; i < n; i++){
		if (a[i] %2 == par2){
			x.push_back(i+1);
		} else{
			y.push_back(i+1);
		}
		}
	int ans = sz(x) + sz(y);
	cout << ans << endl;
	
	for (int i = 0; i < sz(y); i++){
		cout << 1 << " " << y[i] << endl;
	}

	


	for (int i = 0; i<sz(x); i++){
		cout << x[i] <<  " " << n << endl;
	}


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