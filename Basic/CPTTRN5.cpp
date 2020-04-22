/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	22.04.2020 19:34:47
 * @problem:	CPTTRN5
 * @url:	https://www.spoj.com/problems/CPTTRN5/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	int r, c, s;
	cin >> r >> c >> s;
	
	int backslashStarti = 1;
	int backslashColi = backslashStarti;
	
	for(int i = 0; i<r*(s+1)+1; i++) {
		backslashColi = backslashStarti;
		for(int j = 0; j<c*(s+1)+1; j++) {
			if( i % (s+1) == 0) {
				cout << "*";
				if(i % ((s+1) * 2) == 0) backslashStarti = 0;
			}
			else {
				if(j % (s+1) == 0) cout << "*";
				else {
					if((i+j) % ((s+1)*2) == 0) cout << "/";
					else if(j == backslashColi) {
						cout << "\\";
						backslashColi += (s+1)*2;
					}
					else cout << ".";
				}
			}
							 
		}
		cout << endl;
		backslashStarti++;
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

