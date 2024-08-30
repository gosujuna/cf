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
		int N;
		cin >> N;



		vector<int> A(N);
		for (auto& i:A){
			cin >> i;

		}
		vector<int> B(N);
 
		if ([&]() -> bool {
			if (N & 1) return false;
			std::sort(A.begin(), A.end());
			for (int i = 0; i < N/2; i++) {
				B[2*i] = A[i];
			}
			for (int i = 0; i < N/2; i++) {
				B[2*i+1] = A[N/2+i];
			}
			for (int i = 0; i < N; i++) {
				if (B[i] == B[(i+1)%N]) return false;
			}
			return true;
		}()) {
			cout << "YES" << '\n';
			for (int i = 0; i < N; i++) {
				cout << B[i] << " \n"[i+1==N];
			}
		} else {
			cout << "NO" << '\n';
		}
	 }
}