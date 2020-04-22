/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	22.04.2020 20:21:27
 * @problem:	CPTTRN6
 * @url:	https://www.spoj.com/problems/CPTTRN6/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	int r, c, h, w;
	cin >> r >> c >> h >> w;
	
	for(int i = 1; i <= (r+1)*h + r; i++) {
		for(int j = 1; j <= (c+1)*w + c; j++) {
			if(i%(h+1) == 0) {
				if(j%(w+1) == 0) cout << "+";
				else cout << "-";
			}
			else {
				if(j%(w+1) == 0) cout << "|";
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

