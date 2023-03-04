#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
		string a, b;
		cin >> a >> b;
		int as = a.size();
		int bs = b.size();

		// 1st character match
		if (a.substr(0,1) == b.substr(0,1)){
			cout << "YES" << endl;
			cout << a.substr(0, 1) << "*" << endl;
			continue;
		}

		if (a.substr(as-1,1) == b.substr(bs-1,1)){
			cout << "YES" << endl;
			cout <<  "*" << a.substr(as-1,1) << endl;
			continue;
		}

		bool tru = false;
		string c;

		for (int i = 0; i < as - 1; i++){
			for (int j = 0; j < bs - 1; j++){
				// 2 chars match
				if (a.substr(i,2) == b.substr(j,2)){
					//cout << "YES" << endl;
					//cout << "*" << a.substr(i, 2) << "*" << endl;
					c = a.substr(i, 2);
					tru = true;
					break;
				}
				
			}
		}

		if (tru == true){
			cout << "YES" << endl;
			cout << "*" << c << "*" << endl;
		}
		else{cout << "NO" << endl;}
	 }
}