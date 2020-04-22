/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	22.04.2020 18:58:58
 * @problem:	CPTTRN3
 * @url:	https://www.spoj.com/problems/CPTTRN3/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	int r, c;
	cin >> r >> c;
	
	for(int i = 0; i<r*3 + 1; i++) {
		for(int j = 0; j<c*3 + 1; j++) {
			if(i % 3 == 0) cout << "*";
			else {
				if(j % 3 == 0) cout << "*";
				else cout << ".";
			}
		}
		cout << endl;
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

