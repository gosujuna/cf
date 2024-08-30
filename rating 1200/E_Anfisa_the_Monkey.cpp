#include <bits/stdc++.h>

using namespace std;


#define int long long
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
	 int n,a,b;
	 cin >> n >> a >> b;
	 string s;
	 cin >> s;
	 int l  = sz(s);
	 if (l < n*a || l > n*b){
		cout << "No solution" << endl;
		return 0;
	 }

	
	 

	 for (int i =0, j=0; i<n; i++){
		int t = min(b, l - j - (n-i-1)*a);
		cout << s.substr(j, t) << endl;
		j+= t;
	 } 
	 
}