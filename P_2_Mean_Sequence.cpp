#include <bits/stdc++.h>
using namespace std;
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

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 
	 ll t1;
	 cin >> t1;
	 ll t2;
	 cin >> t2;


	 

	 

	 ll T = t2 - t1;

	 ll a = 2 * t1 - t2;
	 ll b = t1;
	 ll ans = b - a;
	 if (n==2){
		 cout << max(ans+1,0LL) << endl;
		 return 0;
	 }
	 for (int i = 2; i < n; i++){
		ll cur = 0;
		 cin >> cur;
		 T = cur - T;
		 

		 if ( i%2 == 1){
			
			a = max((cur -2*T),a);
		 } else{
			
			b = min((2*T - cur),b);
		 } 

		 
		 
		

		 
		 ans = b - a;
	 }

	

	 cout << max(ans+1,0LL) << endl;
}