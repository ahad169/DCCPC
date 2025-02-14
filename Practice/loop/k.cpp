#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	int ans = 0;
	for(int i = ceil(k/(n*1.0L)); i <= min(n,k); i++) {
		ans += !(k % i);
	}
	
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
}
