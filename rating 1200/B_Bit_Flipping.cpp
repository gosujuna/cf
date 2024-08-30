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
	int n, k;
	cin>>n>>k;
	string s;
	cin >> s;

	vector<int> f(n, 0);

	int tmpk = k;
	for (int i = 0; i < n && tmpk > 0; i++){
		if (k%2 == s[i]- '0'){
			f[i] = 1;
			tmpk--;
		}
	}
	f[n - 1] += tmpk;
	for (int i = 0; i < n; i++){
		if ((k-f[i]) %2 ==1){
			s[i] = '1' - (s[i] - '0');
		}
	}
	cout << s << endl;
	for (auto& e:f){
		cout << e << " ";
	}
	cout << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}