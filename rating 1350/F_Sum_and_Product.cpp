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



// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     vector<pair<int,int>> sum;
//     vector<pair<int,int>> mult;

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             sum.push_back({(a[i]) + a[j], (i) * n + j});
//             mult.push_back({(a[i]) * a[j], (i) * n + j}); 
//         }
//     }
//     sort(sum.begin(), sum.end());
//     sort(mult.begin(), mult.end());

//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++) {
//         int x, y;
//         cin >> x >> y;
//         int ans = 0;
        
//         auto it_sum_start = lower_bound(sum.begin(), sum.end(), make_pair(x, 0LL));
//         auto it_sum_end = upper_bound(sum.begin(), sum.end(), make_pair(x, n*n));
        
//         set<int> sum_pairs;
//         for (auto it = it_sum_start; it != it_sum_end; ++it) {
//             sum_pairs.insert(it->second);
//         }
        
//         auto it_mult_start = lower_bound(mult.begin(), mult.end(), make_pair(y, 0LL));
//         auto it_mult_end = upper_bound(mult.begin(), mult.end(), make_pair(y, n*n));
        
//         for (auto it = it_mult_start; it != it_mult_end; ++it) {
//             if (sum_pairs.count(it->second)) {
//                 ans++;
//             }
//         }

//         cout << ans << (i == q - 1 ? '\n' : ' ');
//     }
// }
i64 sqrt2(i64 n) {
    i64 lo = 0, hi = 2 * std::sqrt(n);
    while (lo < hi) {
        i64 x = (lo + hi) / 2;
        if (x * x >= n) {
            hi = x;
        } else {
            lo = x + 1;
        }
    }
    return lo;
}
int sqrt3 (int n){
	return floor(sqrt(n));
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
	map<int,int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
		cnt[a[i]]++;
    }
    int q;
	cin >> q;
	
	for (int i =0; i<q; i++){
		int x,y;
		cin >> x >> y;
		if (x *x -4*y < 0){
			cout << 0 << " ";
			
			continue;
		} 
		int s = sqrt3(x*x - 4*y);
		int a = (x+s) /2;
		int b = (x-s)/2;
		if (a +b != x || a*b !=y){
			cout << 0 << " ";
			
			continue;
		}
		if (a==b){
			int c = cnt[a];
			cout << c* (c-1) / 2 << " ";
		} else{
			cout << cnt[a] * cnt[b] << " ";
		}
	}
	cout << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}