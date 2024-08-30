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
	for (auto & i:a){
		cin >> i;
	}
	bool ans = false;
	bool neg = false;
	ll test = 0;
	vector<int> b(n - 1);
	for (int i = 0; i < n - 1;i++){
		b[i] = a[i + 1] - a[i];
		if (i%2 ==0){
			test += b[i];
		}
	}

	if (test <0){
		neg = true;
	}

	if (n % 2==1) {
		ans = true;
	} else{
		if (!neg){
			ans = true;
		}
	}


	cout << (ans ? "YES" : "NO") << endl;

	/*
	5 4 3 21
	5  4  3  3 2
	5 4 2 2 2
	5 5 3 2 2
	4 4 3 2 2
	3 3 3 2 2
	2 2 3 2 2
	2 2 3 4 4

	5 4 10 2 1
	10 9 10 2 

	3 2 1
	3  3 2
    3 4 3
	4 5 3
	4 3 2 1
	4 3 3 2
	4 2 2 2
	4 4 4 2
	3 3 4 2
	2 2 3 2
	1


	  */  	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}