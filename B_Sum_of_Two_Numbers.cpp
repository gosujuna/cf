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
		
		if (n%2 == 1){

			int x = 0;
			int y = 0;
			int c0 = 0;
			int c1 = 0;
			int pw = 1;

			while (n){
				int p = n % 10;
				if(c0<=c1){
                c0++,x+=(p/2+1)*pw,y+=p/2*pw;


			}else{
                c1++,y+=(p/2+1)*pw,x+=p/2*pw;
				cout << p << endl;
				cout << (p/2)*pw<< endl;
				cout << (p/2+1)*pw << endl;

            }
			n = n / 10;
			pw *= 10;
		}
		cout << x << " " << y << endl;
		}else{
			cout << n / 2 << " " << n / 2 << endl;
	 }
}}