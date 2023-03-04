#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 for (int i = 0; i < T; i++){
		int n, c;
		cin >> n >> c;

		vector<int> arr(n + 1);
		arr[0] = 0;
		int d; // d is each input int on 2nd line
		int count = 0;

		for (int j = 1; j <= n; j++) {
			cin >> d;
			arr[j] = d+j;

			
			
		}

		sort(arr.begin(), arr.end());

		for (int k = 1; k <= n; k++) {


			if (c >= arr[k]){
				c = c - arr[k];
				count++;
			}

			if (c<= 0)
				break;
			
		}

			
		cout << count << endl;


	 }
}