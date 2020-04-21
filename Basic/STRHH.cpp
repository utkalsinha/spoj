/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	21.04.2020 17:41:40
 * @problem:	STRHH 
 * @url:	https://www.spoj.com/problems/STRHH/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void love() {
	string str;
	cin >> str;
	
	for(int i = 0; i<(int)str.length() / 2; i += 2) cout << str[i];
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

