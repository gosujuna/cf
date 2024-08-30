#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& i:a){
		cin >> i;
	}





	if (*max_element(all(a)) != a[0] && *max_element(all(a)) != a[n - 1]) {
		cout << -1 << endl;
		return;
	}

	if (n% 2 == 1){
		vector<int> b(n-1);
		int c = *max_element(all(a));
		a.erase(max_element(all(a)));
		int j = (n - 1) / 2;

		reverse(a.begin(), a.begin() + j);
		reverse(a.begin() + j, a.end());
		a.insert(a.begin() + j, c);

		for (auto &i : a) {
			cout << i << " ";
			
		}
		cout <<endl;
	}

	else{
		int j = (n) / 2;



		reverse(a.begin(), a.begin() + j);
		reverse(a.begin() + j, a.end());

		for (auto &i : a) {
			cout << i << " ";
			
		}
		cout <<endl;
	}
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while(T--){
			solve();
	 }
}