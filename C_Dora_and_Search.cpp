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
int n;
		cin >>n;
		vector<int> a(n);
		for(auto& i:a){
			cin >> i;
		}



		
		int l = 0;
		int r = n-1;
		int ma = n;
			int mi = 1;


		while (l<=r){
			
			if (a[r] == ma){ 
				r--;
				ma--;

				continue;
			}

			if (a[r] == mi){
				r--;
				mi++;
				continue;
			}
			if (a[l] == mi){
				l++;
				mi++;
				continue;
			}

			if (a[l] == ma){
				l++;
				ma--;
				continue;
			}

			break;
		}
		if (l<=r){
				cout << l+1 << " " << r+1 << endl;
			
			}

		else{

		

		cout << -1 << endl;}
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