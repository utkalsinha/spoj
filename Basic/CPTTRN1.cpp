/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	21.04.2020 17:49:32
 * @problem:	CPTTRN1
 * @url:	https://www.spoj.com/problems/CPTTRN1/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	int l, c;
	cin >> l >> c;
	
	bool asterisk = true;
	for(int i = 0; i<l; i++) {
		bool ra = asterisk;
		for(int j = 0; j<c; j++) {
			if(ra) cout << "*";
			else cout << ".";
			ra = !ra;
		}
		cout << endl;
		asterisk = !asterisk;
	}
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

