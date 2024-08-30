#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using str = string; // ben qi python
using i64 = long long;
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



signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 vector<int> a(n);
	 for (int i =0; i<n; i++){
		cin >> a[i];
	 }
	 vector<int> divisors;
	 int zz = max(3,n);
	 for (int i =3; i<= zz; i++){
		if (n % i == 0){
			divisors.push_back(i);
		}
	 }
	 

	 for (int div : divisors){
		for (int j=0; j<(n/div); j++){
			bool yes = true;
			for (int k = 0; k < div; k++){
				if (a[k * (n/div) + j] == 0){
					yes = false;
					
				}
				//cout << k * (n/div) + j<< " current ind" << endl;
			}
			if (yes){
				cout << "YES" << endl;
				return 0;
			}
		}
	 }

	 cout << "NO" << endl;
	 return 0;

}