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

void solve(){
	// looknice;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n, m;
	 cin >> n >> m;

	 vector<string> s(n);
	 for (int i=0; i<n; i++){
		cin >> s[i];
	 }

	 int ans = 0;
	 for (int x1 = 0; x1<n; x1++){
		for (int x2 = x1; x2<n; x2++){
			int len = 0;
			for (int i =0; i<m; i++){
				bool ok = true;
				for (int j = x1; j<=x2; j++){
					if (s[j][i] == '1'){
						ok = false;
					}
				}
				if (ok) {
					len +=1;
					ans = max(ans,(len+x2-x1+1)*2);
				} else{
					len = 0;
				}
			}
		}
	 }
	 cout << ans << endl;

}