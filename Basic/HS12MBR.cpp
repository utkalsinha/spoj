/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	23.04.2020 10:48:30
 * @problem:	HS12MBR
 * @url:	https://www.spoj.com/problems/HS12MBR/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x, y, x11, y11, cx, cy, x2, y2, r;


void love() {
	int n;
	cin >> n;
	
	int ans_lx = INT_MAX;
	int ans_ly = INT_MAX;
	int ans_ux = INT_MIN;
	int ans_uy = INT_MIN;
	
	for(int i = 0; i < n; i++) {
		char c;
		cin >> c;
		
		if(c == 'p') {
			cin >> x >> y;
			ans_lx = min(ans_lx, x);
			ans_ly = min(ans_ly, y);
			ans_ux = max(ans_ux, x);
			ans_uy = max(ans_uy, y);
		}
		
		if(c == 'c') {
			cin >> cx >> cy >> r;
			ans_lx = min(ans_lx, cx - r);
			ans_ly = min(ans_ly, cy - r);
			ans_ux = max(ans_ux, cx + r);
			ans_uy = max(ans_uy, cy + r);
		}
		
		if(c == 'l') {
			cin >> x11 >> y11 >> x2 >> y2;
			ans_lx = min(ans_lx, x11);
			ans_ly = min(ans_ly, y11);
			ans_ux = max(ans_ux, x11);
			ans_uy = max(ans_uy, y11);
			
			ans_lx = min(ans_lx, x2);
			ans_ly = min(ans_ly, y2);
			ans_ux = max(ans_ux, x2);
			ans_uy = max(ans_uy, y2);
		}
		
	}
	
	cout << ans_lx << " " << ans_ly << " " << ans_ux << " " << ans_uy << endl;
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

