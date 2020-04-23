/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	23.04.2020 09:21:54
 * @problem:	CPTTRN7
 * @url:	https://www.spoj.com/problems/CPTTRN7/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	 int r, c, s;
	 cin >> r >> c >> s;
	 
	 int f_slash_start = s-1;
	 int f_slash_coli = f_slash_start;
	 
	 int b_slash_start = s;
	 int b_slash_coli = b_slash_start;
	 
	 for(int i = 0; i<r*s*2; i++) {
		 
		 f_slash_coli = f_slash_start;
		 b_slash_coli = b_slash_start;
		 
		 for(int j = 0; j<c*s*2; j++) {
			if(j == f_slash_coli) {
				cout << "/";
				f_slash_coli += 2*s;
			}
			else if(j == b_slash_coli) {
				cout << "\\";
				b_slash_coli += 2*s;
			}
			else cout << ".";
		 }
		 cout << endl;
		 
		 f_slash_start--;
		 if(f_slash_start < 0) f_slash_start = 2*s - 1;
		 
		 b_slash_start++;
		 if(b_slash_start == 2*s) b_slash_start = 0;
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

