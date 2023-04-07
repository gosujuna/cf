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
	int n,m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		for (int j = 0; j < m; j++){
			a[i][j] = s[j] - '0';
		}
	}



	for (int i = 0; i < n; i++){
		int one = -1;
		int two = -1;
		bool cur = 0;
		vector<pair<int, int>> p;
		for (int j = 0; j < m; j++){
			if (cur == 1){
				if (a[i][j] ==1){
					two++;
					if (j == m-1){
						p.emplace_back(one, two);

					}
				} else{
					cur = 0;
					p.emplace_back(one, two);

					one = -1;
					two = -1;
					
				}
			}
			else if (a[i][j] == 1 && cur ==0){
				one = j;
				two = j;
				cur = 1;
				if (j == m-1){
						p.emplace_back(one, two);

				}
			} 

		}

		if (i+1 <n){
			for (auto& k:p){
				bool par = a[i + 1][k.first];

	

				if (par != a[i][k.first]){
					for (int h = k.first +1; h <= k.second; h++){
					if (a[i+1][h] == 1){
						cout << "NO" << endl;
						return;
					}
				}
				} else{
						for (int h = k.first +1; h <= k.second; h++){
					if (a[i+1][h] == 0){
						cout << "NO" << endl;
						return;
					}
				}
				if (k.second +1 < m){
					if (a[i+1][k.second +1] == 1){
						cout << "NO" << endl;
						return;
					}
				}

				if (k.first -1 >= 0){
					if (a[i+1][k.first -1] == 1){
						cout << "NO" << endl;
						return;
					}
				}

				}
			
				
			}
		}
	}

		cout << "YES" << endl;
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