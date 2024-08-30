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
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> b(n);

		for(auto& i:a){
			cin >> i;

		}

		int count =0;
		int count2 = 0;

		for (int i = 0; i < n; i++){
			if (a[i] > 0){
				count++;
			}
			else {
				count2++;
			}
		}

		//int diff = count - count2;

		bool one = false;

		for (int i = 0; i < n; i++) {
			b[i] = a[i];
		}

		vector<int> x(n+1);
		vector<int> y(n+1);


		sort(b.rbegin(), b.rend());

		for (int i = 1; i <= (2 * count2);i++){
			
			if (one == false){
				x[i] = 1;
				one = true;
			} else{
				x[i] = 0;
				one = false;
			}
			
		}

		for (int i = 2*count2 +1; i <= n;i++){

			x[i] = x[i - 1] + 1;
		}


		for (int i = 1; i <= n;i++){
			
			if (b[i-1] >0){
				y[i] = y[i - 1] + 1;
			} else{
				y[i] = y[i - 1] -1;
			}
			
		}
		for (int i = 1; i <= n; i++){
			cout << y[i] << " ";
		}
		cout << endl;

		for (int i = 1; i <= n; i++){
			cout << x[i] << " ";
		}
		cout << endl;
		

	 }
}