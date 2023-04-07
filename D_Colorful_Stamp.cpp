#include <bits/stdc++.h>
using namespace std;
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


int solve(vector<int> arr){
  
  int n = arr.size();
  
  //vector<int> b(n);
  //0 1 2 3 4
  //0 1 2 3 5
  
  // 0 1 2 3 4
  
  int low = 0;
  int high = n-1;
  
  int mid =n/2;
  
  if (arr[0] != 0){
    return 0;
  }
  
  while(!(arr[mid-1] == mid-1 && arr[mid] != mid) || mid != n-1){
    
     if (arr[mid] > mid){
    high = mid -1;
    mid = (low+high)/2;
  } else{
    low = mid;
    mid = (low+high)/2;
  }
    
  }
  
  if (mid  == (n-1)){
    if (arr[n-1] == n-1){
      return n;
    } else{
      return n-1;
    }
  }
  
  
  return mid;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 vector<int> a(T);

	 for (auto& i:a){
	cin >> i;
	 }
	 int ans = solve(a);
	 cout << ans << endl;
}