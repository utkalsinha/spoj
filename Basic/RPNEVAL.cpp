/*
 * @author:	Utkal Sinha
 * @contact:	me@utkalsinha.com
 * @created on:	23.04.2020 11:12:29
 * @problem:	RPNEVAL
 * @url:	https://www.spoj.com/problems/RPNEVAL/
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int op_add = 0; // addition
const int op_sub = 1; // subtraction
const int op_mul = 2; // multiplication
const int op_div = 3; // division
const double INF = 1.0 * INT_MAX;

double getOpRes(vector<double> &stk, const int op) {
	if(stk.empty()) return INF;
	else if(stk.size() == 1) {
		stk.pop_back();
		return INF;
	}
	
	double b = stk.back();
	stk.pop_back();
					
	double a = stk.back();
	stk.pop_back();
	
	if(op == op_add) return a+b;
	if(op == op_sub) return a-b;
	if(op == op_mul) return a*b;
	if(op == op_div) {
		if(b == 0.0) return INF;
		else return a/b;
	}
	return INF;
}

void love() {
	string input_exp;
	
	while(getline(cin, input_exp)) {

		input_exp += " ";
		size_t pos = 0;
		vector<double> stk;
		bool validexp = true;
		string token;
		
		while((pos = input_exp.find(" ")) != string::npos) {
			token = input_exp.substr(0, pos);

			if(token == "+") {
				// addition
				double res = getOpRes(stk, op_add);
				if(res == INF) {
					validexp = false;
					break;
				}
				stk.push_back(res);
			}
			else if(token == "-") {
				// subtraction
				double res = getOpRes(stk, op_sub);
				if(res == INF) {
					validexp = false;
					break;
				}
				stk.push_back(res);
			}
			else if(token == "*") {
				// multiplication
				double res = getOpRes(stk, op_mul);
				if(res == INF) {
					validexp = false;
					break;
				}
				stk.push_back(res);
			}
			else if(token == "/") {
				// division
				double res = getOpRes(stk, op_div);
				if(res == INF) {
					validexp = false;
					break;
				}
				stk.push_back(res);
			}
			else {
				// operand
				if(token.length() > 0) {
					double tmpd = stod(token);
					stk.push_back(tmpd);
				}
			}
			
			input_exp.erase(0, pos+1);
		}

		if((stk.size() == 1) && validexp) {
			cout << fixed << setprecision(4) << stk.back() << endl;
		}
		else cout << "ERROR" << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	if(getenv("MY_ONLINE_JUDGE2")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ll t = 1;
	//cin >> t;

	while(t--) love();
	
	return 0;
}

