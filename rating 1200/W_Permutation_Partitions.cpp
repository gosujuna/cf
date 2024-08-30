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

int mod = 998244353;
int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n, k;
	 cin >> n >> k;
	 vector<int> a(n);
	 

	 for (auto& i:a){
		cin >> i;
	 }
	 ll part = 0;
	 for (int i = n-k+1; i<=n; i++){
		part += i;
	 }
	 ll ans = 1;
	 vector<int> v;
	 for (int i=0;i<n;i++) {
        if (a[i] >= n-k+1) {
            
            v.push_back(i);
        }
    }
	for (int i=1;i<v.size();i++) {
        ans = ans * (v[i]-v[i-1]) % mod;
    }
	 



	 cout << part << " " << ans << endl;




}