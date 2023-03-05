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
void solve(){
	int n;
	cin >> n;
	char c;
	cin >> c;
	string s;
	cin >> s;

	vector<int> g;
    for (int j = 0; j < n * 2; j++){ // g holds elements that are green. 2 cycles
      if (s[j % n] == 'g'){
        g.push_back(j);
      }
    }
	int ans = 0;
	for (int j = 0; j < n; j++){
		if (s[j] == c){
		ans = max(ans, *lower_bound(g.begin(), g.end(), j) - j); //lower bound finds first element greater than j that is greenfrom 
		}
	}
	cout << ans << endl;
}

int main() {
		//	freopen("input.txt", "r", stdin);
		//	freopen("output.txt", "w", stdout);
		ios_base::sync_with_stdio(false), cin.tie(nullptr);
		int T;
		cin >> T;
		while (T--) {
			solve();
		}

}