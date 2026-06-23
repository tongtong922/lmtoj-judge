#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, a[100001], f[123456];
vector<int> edges[100001];
inline int dfs(int x) {
	if (f[x] != 0) return f[x];
	int cnt = 0;
	for (auto &v : edges[x])
		if (a[x] > a[v])
			cnt += dfs(v);
	return f[x] = cnt + 1;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		int u, v;
		cin >> u >> v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, dfs(i));
	}
	cout << ans;
	return 0;
}