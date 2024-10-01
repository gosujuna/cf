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
	int n,m,k;
	cin >> n >> m >> k;
	vector a(n, vector<int>(m,0));
	for (int i =0; i<n; i++){
		string s;
		cin >> s;
		for (int j=0; j<m; j++){
			if (s[j] == '*'){
				a[i][j] = 1;
			}
		}
	}
	vector<int> dx{-1,1,0,0};
	vector<int> dy{0,0,1,-1};
	
	vector vis(n, vector<int>(m,-1));
	for (int i =0; i<n; i++){
		for (int j =0; j<m; j++){
			if (vis[i][j] == -1 && a[i][j] == 0){
				vector<pair<int,int>> q;
				q.emplace_back(i,j);
				vis[i][j] = 0;
				int res = 0;
				for (int t =0; t< q.size(); t++){
					auto [x,y] = q[t];
					for (int k = 0; k<4; k++){
						int nx = x + dx[k];
						int ny = y + dy[k];
						if (vis[nx][ny] == -1 && a[nx][ny] == 0){
							q.emplace_back(nx,ny);
							vis[nx][ny] = 0;
						}
						if (a[nx][ny] == 1){
							res += 1;
						}

					}
				}
				for (auto [x,y] : q){
					vis[x][y] = res;
				}
			} 
		}
	}
	while(k--){
		int x,y;
		cin >> x >> y;
		x--;
		y--;
		cout << vis[x][y] << endl;
	}
	
}
// //
// *11*
// 1..1
// 1.1*
// *1**
signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
	solve();
	
}