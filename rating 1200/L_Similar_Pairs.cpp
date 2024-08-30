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
	cin >>n;
	vector<int> x(n);

	int a=0, b=0;
	for (auto& i:x){
		cin >> i;
		if (i % 2 == 0){
			a++;
		} else{
			b++;
		}
	}
	
	if (a%2 != b%2){
		cout << "NO" << endl;
		return;
	}

	if (a%2 == 0){
		cout << "YES" << endl;
		return;
	}

	sort(all(x));
	bool exist = false;
	for (int i =0; i<n-1; i++){
		if (x[i] + 1 == x[i+1]){
			exist = true;
			break;
		}
	}

	if (exist){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
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