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
		int n, m;
		cin >> n >> m;

		if(((n % 2 == 0) && (m % 2 == 1)) || (m < n)){ // impossible cases, M < N and (M - odd, N - even)
		cout << "NO\n";

	} else if ( n%2 ==1){
		cout << "YES" << endl;
		for (int i= 1; i < n; i++){
			cout << "1 ";
		}
		cout << m - n + 1 << endl;
	} else{
		cout<< "YES" << endl;
		for (int i = 2; i < n; i++){
			cout << "1"
				 << " ";
		}
		cout << (m - n + 2)/2 << " " << (m - n + 2)/2 << endl;
	}
	 }
}