#include <bits/stdc++.h>

using namespace std;



#define int long long
using str = string; // ben qi python
using i64 = long long;
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
	int x,y;
	 cin >> x >> y;
	 if (x==0 || y== 0){
		cout << "black" << endl;
		return;
	 }

	 if ((x<0 && y<0) || (y>0 && x>0)){
		int help = pow(x,2) + pow(y,2);
		

		for (int i =0; i<1500; i+= 2){
			if (help >= pow(i,2) && help <= pow(i+1,2)){
				cout << "black" << endl;
				return;
			}

			
		}
		cout << "white" << endl;

	 } else{
		int help = pow(x,2) + pow(y,2);

		for (int i =1; i<1500; i+= 2){
			if (help >= pow(i,2) && help <= pow(i+1,2)){
				cout << "black" << endl;
				return;
			}

			
		}
		cout << "white" << endl;

	 }
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 solve();
	 

}