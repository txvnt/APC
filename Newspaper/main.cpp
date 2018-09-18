#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases, k, m;
	cin >> cases;
	for(int c = 0; c<cases; c++){
		cin >> k;
		char chars[k];
		double prices[k];
		double totalPrice = 0;
		for(int i = 0; i<k; i++){
			char input;
			double price;um
			cin >> input;
			getchar();
			cin >> price;
			price/=100;
			chars[i] = input;
			prices[i] = price;
		}
		cin >> m;
		for(int i = 0; i<m; i++){
			string line;
			getline(cin, line);
			for(int i = 0; i<line.size(); i++){
				for(int j = 0; j<k; j++){
					if(line[i] == chars[j]){
						totalPrice+=prices[j];
					}
				}
			}
		}
		cout << setprecision(2) << fixed << setfill('0');
		cout << totalPrice << "$" << endl;;
	}
}
