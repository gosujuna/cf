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

		for (auto& i : a){
			cin >> i;
		}

		int num = n / 2 ;
		int count = 0;
		sort(all(a));
		set<int> s;
		for (int i = 0; i < n; i++) {
			s.insert(a[i]);
		}
		


		for (int i = 1; i <n; i++) {
			
		if (count == num) {
			return;
		}

		cout << a[i] << " " << a[0] << endl;
		count++;
		
		}
	

		

			
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
	 int T;
	 cin >> T;

	 while (T--){
			solve();
	 }

}