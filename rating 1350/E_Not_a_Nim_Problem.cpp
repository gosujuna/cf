#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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
std::vector<int> minp, primes;

void sieve(int n) {
    minp.assign(n + 1, 0);
    primes.clear();
    
    for (int i = 2; i <= n; i++) {
        if (minp[i] == 0) {
            minp[i] = i;
            primes.push_back(i);
        }
        
        for (auto p : primes) {
            if (i * p > n) {
                break;
            }
            minp[i * p] = p;
            if (p == minp[i]) {
                break;
            }
        }
    }
}

int N = 1e7;
vector<int> sg(N+1);
void solve()
{             
	int n;
	cin >> n;
	int ans = 0;
	for (int i =0; i<n; i++){
		int z;
		cin >> z;
		ans ^= sg[z];
	}

	if (ans != 0){
		cout << "Alice" << endl;
	} else{
		cout << "Bob" << endl;
	}


}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 sieve(N);
	 sg[0] = 0;
	sg[1] = 1;
	sg[2] = 0;
	
	for (int i =1; i<primes.size(); i++){
		sg[primes[i]] = i+1;
	}
	for (int i =3; i<=N; i++){
		sg[i] = sg[minp[i]];
	}
	 
	 while (T--){
		solve();
	 }
}