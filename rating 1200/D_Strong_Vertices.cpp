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
const int N=200005;
int a[N],b[N];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        int mx=INT_MIN;
        for(int i=1;i<=n;i++)mx=max(mx,a[i]-b[i]);
        int c=0;
        for(int i=1;i<=n;i++)c+=(a[i]-b[i]==mx);
        cout<<c<<"\n";
        for(int i=1;i<=n;i++)if(a[i]-b[i]==mx)cout<<i<<' ';
        cout<<"\n";
    }
}