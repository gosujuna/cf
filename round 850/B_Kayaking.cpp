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

	 T = T * 2;

	 vector<int> n(T);

	 for (int i = 0; i < T; i++){
		cin >> n[i];
	 }

	 int i, j, k;
	 int m, sum;

	 m = 99999;
	 for (i = 0; i < T - 1; i++){
		for (j = i + 1; j < T; j++){
			
			vector<int> v;
			sum = 0;
			
			for (k = 0; k < T; k++){
				if (k!= j && k!= i){
					v.push_back(n[k]);
				}
			}

			sort(v.begin(), v.end());
			
			for (k = 0; k < v.size(); k += 2){
				sum += (v[k + 1] - v[k]);
				
			}

			m = min(m, sum);
		}
	 }
		cout << m << endl;
}