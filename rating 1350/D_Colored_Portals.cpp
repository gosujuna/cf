#include <bits/stdc++.h>
using namespace std;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;
 #define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
string color = "BGRY";
 
constexpr int inf = 1E9;
int id (int x, int y){
	if (x > y){
		swap(x,y);
	}
	return y * (y-1) /2 + x;
}
 
void solve(){
	int n, q;
	cin >> n >> q;
	vector<vector<int>> c(n,vector<int>(2));

	for (int i =0; i<n; i++){
		string s;
		cin >> s;
		for (int j= 0; j<2; j++){
			c[i][j] = color.find(s[j]);
		}
		assert(c[i][0] < c[i][1]);
	}
	vector<vector<int>> pre(n,vector<int>(6));
	vector<vector<int>> nxt(n,vector<int>(6));

	for (int i =0; i<n; i++){
		if (i==0){
			fill(all(pre[i]), -1);
		} else{
			pre[i] = pre[i-1];
		}
		pre[i][id(c[i][0],c[i][1])] = i;
	}
	for (int i =n-1; i>=0; i--){
		if (i==n-1){
			fill(all(nxt[i]), n);
		} else{
			nxt[i] = nxt[i+1];
		}
		nxt[i][id(c[i][0],c[i][1])] = i;
	}

	while (q--){
		int x,y;
		cin >> x >> y;
		x--;
		y--;
		if (x>y){
			swap(x,y);
		}
		int ans = inf;
		for (auto a: c[x]){
			for (auto b : c[y]){
				if (a==b){
					ans = y-x;
				} else{
					int w = id(a,b);
					for (auto z: {nxt[x][w], pre[y][w]}) {
						if (0 <= z && z<n){
							ans = min(ans, abs(x-z) + abs(y-z));
						}
					}
				}
			}
		}
		if (ans == inf){
			ans = -1;
		}
		cout << ans << endl;
	}
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}