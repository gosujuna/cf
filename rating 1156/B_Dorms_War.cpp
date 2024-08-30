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
		string s;
		cin >> s;
		int k;
		cin >> k;
		set<char> check;
		for (int i = 0; i < k;i++) {
			char c;
			cin >> c;
			check.insert(c);
		}
		vector<int>b(n);
		for (int i = 0; i < n;i++){
			if (check.count(s[i])){
				b[i] = 1;
			} else{
				b[i] = 0;
			}
		}

		int count =0;

		int ans = 0;

		for (int i = 0; i < n;i++){
			if (b[i] == 0){
				count++;

			} else{
				ans =  max(ans,count);
				count = 1;
			}
		}



		cout << ans << endl;
	 }
}