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

int b[2007],n,k,a,x=0,ans=0;
set<int> s;unordered_map<int,int>m;
int main(){
  scanf("%d%d",&k,&n);
  for (int i=0;i<k;i++)scanf("%d",&a),x+=a,s.insert(x);
  for (int i=0;i<n;i++)scanf("%d",b+i);
  for (int i=0;i<n;i++)for(int e:s)++m[b[i]-e],ans+=(m[b[i]-e]==n);
  cout<<ans;
}