#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice;
	int n ,m,k;
	vector<int> a;
	a.push_back(0);
	string s;
	cin >> n >> m >> k;
	cin >> s;
	

	for (int i =0; i<n; i++){
		if (s[i] == 'C'){
			a.push_back(-1);
		}
		if (s[i] == 'W'){
			a.push_back(1);
		}
		if (s[i] == 'L'){
			a.push_back(0);
		}
	}
	//a.push_back(-2);
	int cur = 0;
	int water = 0;
	vector<int> f(n+2,0);
	bool ok = true;
	debug(a);
	for(int i =0; i<=n;i++){
		//cout << i << endl;
		
		if (a[i] == 0){
			bool temp = true;
			for (int j = min(i+m,n+1) ; j >=1; j--){
				if (j == n+1){
					cout << (water > k ? "NO" : "YES") << endl;
					cout << "end by jump" << endl;
					return;
				} 
				if ( a[j] == 0){
					if (j > i+1){
						i = j-1;
					}
					
					temp = false;
					break;
				}
				
			}
			if (temp){
				if (i != n && a[i+1] == -1){
					ok = false;
					break;
					}
				else{
					water++;
					continue;

					}
			}
		} else if (a[i] == 1){
			if (i != n && a[i+1] == -1){
				ok = false;
				break;
			}
		 else{
			water++;
			continue;

			}

		}

		
			

		
	}

	if (water > k){
		ok = false;
	}


	if (ok){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
	}
	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}