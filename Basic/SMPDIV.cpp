/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	23.04.2020 09:46:43
 * @problem:	SMPDIV
 * @url:	https://www.spoj.com/problems/SMPDIV/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	int n, x, y;
	cin >> n >> x >> y;
	
	for(int i = 2; i<n; i++) {
		if( i % x == 0 && i % y != 0) cout << i << " ";
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	if(getenv("MY_ONLINE_JUDGE")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ll t = 1;
	cin >> t;

	while(t--) love();
	
	return 0;
}

