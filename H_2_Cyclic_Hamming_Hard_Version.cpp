#include <bits/stdc++.h>
using namespace std;
inline int read(){
   int s=0,w=1;
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}
const int p=998244353;
int n=read()+1,N=1<<n;
vector<vector<int>> f[1<<14];
int rev[1<<16];
int a[1<<16],b[1<<16];
char s[1<<16];
void solve(int l,int r,int x,int y)
{
	if(l==r)
	{
		f[x].resize(1,vector<int>(2));
		if(s[l]!='1') f[x][0][0]=1;
		if(s[l]!='0') f[x][0][1]=1;
		return ;
	}
	int mid=(l+r)>>1;
	solve(l,mid,x<<1,y>>1),
	solve(mid+1,r,(x<<1)+1,y>>1);
	f[x].resize(y<<1);
	int ls=x<<1,rs=(x<<1)+1;
	for(int i=0; i<y; ++i)
	{
		int sz=f[ls][i].size();
		f[x][i].resize((sz<<1)-1);
		for(int j=0; j<sz; ++j)
			for(int k=0; k<sz; ++k)
				f[x][i][j+k]=(f[x][i][j+k]
				+1ll*f[ls][i][j]*f[rs][i][k])%p;
	}
	for(int i=0; i<y; ++i)
	{
		int sz=f[ls][i].size();
		f[x][i+y].resize(sz);
		for(int j=0; j<sz; ++j)
			f[x][i+y][j]=1ll*f[ls][i][j]*f[rs][i][j]%p;
	}
	vector<vector<int>>().swap(f[ls]);
	vector<vector<int>>().swap(f[rs]);
	return ;
}
void solve()
{
	scanf("%s",s);
	for(int i=0; i<N; ++i)
		if(rev[i]>i) swap(s[i],s[rev[i]]);
	solve(0,N-1,1,N>>1);
}
signed main()
{
	for(int i=1,w=N>>1; i<N; i<<=1,w>>=1)
		for(int j=0; j<i; ++j)
			rev[i+j]=rev[j]+w;
	solve();
	for(int i=0; i+1<N; ++i)
		a[i]=f[1][i][f[1][i].size()>>1];
	for(int i=N-1; i>=0; --i)
		for(int j=i+1; j<N; ++j)
			if((i&j)==i)
				a[i]=(a[i]+p-a[j])%p;
	f[1].clear(),
	solve();
	for(int i=0; i+1<N; ++i)
		b[i]=f[1][i][f[1][i].size()>>1];
	for(int i=N-1; i>=0; --i)
		for(int j=i+1; j<N; ++j)
			if((i&j)==i)
				b[i]=(b[i]+p-b[j])%p;
	int ans=0;
	for(int i=0; i<N; ++i)
		for(int j=0; j<N; ++j)
			if((i|j)==N-1) ans=(ans+1ll*a[i]*b[j])%p;
	cout << ans << endl;
	return 0;
}