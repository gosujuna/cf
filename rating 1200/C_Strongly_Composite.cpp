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
vector<ll> factor(ll n) {
	vector<ll> ret;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret.push_back(i);
			n /= i;
		}
	}
	if (n > 1) { ret.push_back(n); }
	return ret;
}

void solve(){
	// looknice;
	ll n;
	cin>>n;
	vector<ll> a(n);

	int size = 0;
	vector<ll> arr;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		vector<ll> res = factor(a[i]);
		for (int j = 0; j < sz(res); j++){
			arr.push_back(res[j]);
		}
	}
	sort(all(arr));

	ll two = 0;
	
	
	int test = sz(arr);
	for (int i = 0; i < sz(arr)-1; i++) {
		if (arr[i] == arr[i+1]){
			two++;
			test -= 2;
			i++;
		} 
	}
	size = two + test / 3;
	cout << size << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}