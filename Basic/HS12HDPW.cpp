/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	23.04.2020 09:58:13
 * @problem:	HS12HDPW
 * @url:	https://www.spoj.com/problems/HS12HDPW/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int getIndex(string &s, int si) {
	
	int bts[6];
	for(int i = 0, bi = 5; i < (int)s.length(); i++, si = (si+1) % 6) {
		bts[bi--] = (((int)s[i]) >> si) & 1;
	}
	
	int num = 0;
	int pw = 1;
	
	for(int i = 5; i >= 0; i--) {
		num += bts[i] * pw;
		pw = pw << 1;
	}
	
	return num;
}

void love() {
	int n;
	cin >> n;
	
	string s[n];
	for(int i = 0; i<n; i++) cin >> s[i];
	
	string fs;
	cin >> fs;
	
	for(int i = 0; i<n; i++) {
		int fsi_a = getIndex(s[i], 0);
		int fsi_b = getIndex(s[i], 3);
		cout << fs[fsi_a] << fs[fsi_b];
	}
	cout << endl;
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

