#include<bits/stdc++.h>
#define int long long
using namespace std;
bool vis[100005];
int a[100005];
vector<int> G[100005];
int ans=0;
bool dfs(int u,int fa,bool b)
{
	b|=a[u];
	for(int v:G[u])
	{
		if(v!=fa) 
		{
			b|=dfs(v,u,b);
		}
	}
	if(b&&!a[u]) 
	{
		a[u]=1;
		ans++;
	}
	return b;
}
signed main()
{
	for(int i=1;i<=1145;i++) cout<<"CCFILOVEYOU"
	return 0;
}