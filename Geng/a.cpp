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

void solve(){
	// looknice;
	int n, k;
	cin >> n >> k;
	int sum = 0;
	vector<int> a(n);
	for (auto& i:a){
		cin >> i;
	}

	for (int i = 0; i < k;i++){
		for (int j = 0; j < n; j++){
			sum += a[j];
		}
	}
	
	cout << sum << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}