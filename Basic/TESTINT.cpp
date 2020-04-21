/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	21.04.2020 17:35:41
 * @problem:	TESTINT
 * @url:	https://www.spoj.com/problems/TESTINT/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	if(getenv("MY_ONLINE_JUDGE")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ll t = 1;
	// cin >> t;

	while(t--) love();
	
	return 0;
}

