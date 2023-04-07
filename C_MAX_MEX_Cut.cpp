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
	 while(T--){
		int n;
		cin >> n;
		str x, y;
		cin >> x >> y;
		int ans = 0;


		for (int i = 0; i < n;i++){

			if (x[i] == '0' && y[i] == '1'){
				ans += 2;
				continue;
			}
			if (x[i] == '1' && y[i] == '0'){
				ans += 2;
				continue;
			}

			if (i!= n-1){
							if (x[i] == '1' && y[i] == '1' && x[i+1] == '0' && y[i+1] == '0' && i != n-1){

				i++;
				ans += 2;


				continue;
			}

			if (x[i] == '0' && y[i] == '0' && x[i+1] == '1' && y[i+1] == '1' && i != n-1){

				i++;
				ans += 2;


				continue;
			}

			}


			if (x[i] == '0' && y[i] == '0'){
				ans += 1;

			}
			
		}

	

		// finish caase where last is not used
		cout << ans << endl;
	 }
}