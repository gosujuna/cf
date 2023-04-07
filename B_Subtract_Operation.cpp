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
		int k;
		cin >> n >> k;
		vector<int> a(n);

		for(auto& i:a){
			cin >> i;
		}

		bool ans = false;

		if (n==1){
			ans = (a[0] == k);
		}

		else {
			sort(all(a));
			int i = 0;
			int j = 1;

			while (j<n and i<n){
				if (a[i] + abs(k) == a[j]){
					ans = true;
					break;
				} else if(a[i] + abs(k) < a[j])
					i++;
				else
					j++;
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	 }
}