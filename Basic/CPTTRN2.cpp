/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	22.04.2020 18:47:26
 * @problem:	CPTTRN2
 * @url:	https://www.spoj.com/problems/CPTTRN2/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	int r, c;
	cin >> r >> c;
	
	for(int i = 0; i<r; i++) {
		for(int j = 0; j<c; j++) {
			if(i == 0 || i == r-1) cout << "*";
			else {
				if(j == 0 || j == c-1) cout <<"*";
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

