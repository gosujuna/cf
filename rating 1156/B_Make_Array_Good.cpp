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


ll f(ll x){
    ll cur=1;
    while(cur<=x){
        cur*=2;
    }
    return cur;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while(T--){
		int n;
		cin >> n;
		vector<ll> a(n);
		for (auto& i:a){
			cin >> i;
		}

		cout << n << endl;

		for (int i = 1; i <= n;i++){
			
			

			
			cout << i << " " << f(a[i-1]) - a[i-1] << endl;
		}
	 }
}
