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
	 int T;
	 cin >> T;
	 while (T--){

		 int n, l, r;
		 cin >> n >> l >> r;

		 bool yes = true;
        for(int i=1;i<=n;i++){
            if(r/i < (l+i-1)/i){
                yes = false;
            }
        }

		if (yes){
			cout << "YES" << endl;
			for (int i = 1; i <= n; i++){
				cout << (r/i)*i << " ";

			}
			cout << endl;
		} else{
			cout << "NO" << endl;
		}
	 }
	

}