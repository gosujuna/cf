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
	int n;
	cin >>n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i<n; i++){
		string s;
		cin >> s;
		for (int j = 0; j<n; j++){
			a[i][j] = s[j] - '0';
		}

	}
	int ans = 0;
    for(int i = 0; i < (n+1)/2; i++)
    {
        for(int j = 0; j < n/2; j++)
        {
            int nowi = i, nowj = j;
            int oldnowj = nowj;
            int sum = a[nowi][nowj];
            nowj = n-nowi-1;
            nowi = oldnowj;
            sum+=a[nowi][nowj];
            oldnowj = nowj;
            nowj = n-nowi-1;
            nowi = oldnowj;
            sum+=a[nowi][nowj];
            oldnowj = nowj;
            nowj = n-nowi-1;
            nowi = oldnowj;
            sum+=a[nowi][nowj];
            ans+=min(sum, 4-sum);
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
	 while (T--){
		solve();
	 }
}