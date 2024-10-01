#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using ll = long long;
using i64 = long long;
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve() {
    int n,q;cin>>n>>q;
        vector<ll> aa(n);
        for (int i=0;i<n;i++){
            cin>>aa[i];
        }
        while(q--){
            ll k;cin>>k;
            
            auto f = [&](ll target){
                vector<ll> a = aa;
                ll s = 0;
                for (int i=0;i<n;i++){
                    for (int b=59;b>=0;b--){
                        if ((target & (1ll << b)) && (~a[i] & (1ll << b))){
                            s += (1ll << b) - a[i];
                            a[i] = 0;
                            if (s > k) return false;
                        }
                        if (a[i] & (1ll << b)){
                            a[i] ^= (1ll << b);
                        }
                    }
                }
                return true;
            };
            ll ans = 0;
            for (int i=59;i>=0;i--){
                if (f(ans | (1ll << i))){
                    ans |= (1ll << i);
                }
            }
            cout<<ans<<'\n';
        }
}
signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	 
		solve();
	 
}