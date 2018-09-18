#include <bits/stdc++.h>
using namespace std;
vector< pair<int, string> > result;
int main(){
	int cases;
	cin >> cases;
	cin.ignore(256, ' ');
	while(cases--){
		vector<int> order;
		vector<string> numbers;
		string str;
		getline(cin, str);
		stringstream ss(str);
		int aux = 0;
		while(ss >> aux){
			order.push_back(aux);
		}
		
		string strNumbers;
		getline(cin, strNumbers);
		stringstream ssNumbers(strNumbers);
		string auxS;
		while(ssNumbers >> auxS){
			numbers.push_back(auxS);
		}
		
		int minSize = min(order.size(), numbers.size());				
		for(int j = 0; j<order.size(); j++){
			result.push_back(make_pair(order[j], numbers[j]));
		}
		
		sort(result.begin(), result.end());
		
		for(int j = 0; j<order.size(); j++){
			cout << result[j].second << endl;
		}
		order.clear();
		numbers.clear();
		result.clear();
		
		cin.ignore(256, ' ');
	}
	
}
