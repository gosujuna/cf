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

int countLessEqual(const std::vector<int>& a, int Z, int mid) {
    int count = 0;
    for (int num : a) {
        if (num % Z <= mid) {
            count++;
        }
    }
    return count;
}
int find(const std::vector<int>& a, int Z, int k) {
    int left = *std::min_element(a.begin(), a.end());
    int right = *std::max_element(a.begin(), a.end());
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int count = 0;
        int exact = 0;
        
        for (int num : a) {
            if (num % Z < mid % Z || (num % Z == mid % Z && num <= mid)) {
                count++;
            }
            if (num % Z == mid % Z && num == mid) {
                exact++;
            }
        }
        
        if (count < k && count + exact >= k) {
            return mid;
        } else if (count >= k) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return left; // This line should never be reached if k is valid
}
void solve(){
	// looknice;
	int n, q;
	cin >> n >> q;

	vector<int> a(n);
	vector<int> c(n+1,0ll);
	int mx = 0;
	for (int i =0; i<n; i++){
		cin >> a[i];
		c[a[i]]++;
	}
	for (int i =1; i<=n; i++){
		c[i] += c[i-1];
	}
	vector<int> res(n+1,0);
	
	for (int i=1; i<=n; i++){
		int l=0, r=i;
		while (l < r){
			int mid = (l+r)/2;
			int cnt = c[mid];
			for (int k =1; k*i <=n; k++){
				cnt += c[min(k*i+mid,n)] - c[k*i-1];
			}
			if (cnt-1 >= n/2){
				r = mid;
			} else{
				l = mid+1;
			}
		}
		res[i]  = l;
	}
	

	for (int i =0; i<q; i++){
		int z; 
		cin >> z;
		

		cout << res[z] << " ";


		
		
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