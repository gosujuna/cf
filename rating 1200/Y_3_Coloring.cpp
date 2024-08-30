#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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
	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 vector<pair<int,int>> ve[2];

	 #define black 0
	 #define white 1

	 for (int i =1; i<=n; i++){
		for (int j =1; j<=n; j++){
			ve[(i + j) % 2].push_back({i, j});
		}
	 }

	 for (int t=1; t<=n*n; t++){
		int a,b,i,j,col;
		cin >> a;

		if (a==1){
			if (!ve[black].empty()){
				col = black;
				b = 2;
			} else{
				col = white;
				b=3;
			}
		}
		else if (a==2){
			if (!ve[white].empty()){
				col = white;
				b=1;
			} else{
				col = black;
				b=3;
			}
		}
		else {
			if (!ve[white].empty()){
				col = white;
				b=1;
			} else{
				col = black;
				b=2;
			}
		}

		tie(i,j) = ve[col].back();
		ve[col].pop_back();

		cout << b << " " << i << " " << j << endl;
		cout.flush();
	 }


}