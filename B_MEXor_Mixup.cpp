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
		int a, b;
		cin >> a >> b;



		int pXor;
    	if (a % 4 == 1) {pXor = a - 1;}
   	 else if (a % 4 == 2) {pXor = 1;}
    else if (a % 4 == 3) {pXor = a;}
    else {pXor = 0;}

		int x = pXor;
		if (x == b){
			cout << a << endl;
		} else if ( (x^b) == a){
			cout << a + 2 << endl;
		} else{
			cout << a + 1 << endl;
		}

			
	 }
}