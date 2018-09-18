#include <bits/stdc++.h>
using namespace std;
int main(){
	int nLovers, k;
	cin >> nLovers;
	string countries[nLovers];
	int lovers[nLovers] = {0};
	for(int i = 0; i<nLovers; i++){
		string pais, lover;
		cin >> pais;
		getchar();
		getline(cin, lover);
		int j;
		for(j = 0; j<nLovers; j++){
			if(countries[j].compare(pais) == 0){
				lovers[j] += 1;
				break;
			}
		}
		if(j == nLovers){
			countries[k] = pais;
			lovers[k] += 1;
			k++;
		}
	}
	
	for(int i = 0; i<k;i++){
		for(int j = i+1; j<k;j++){
			if(countries[i].compare(countries[j]) > 0){
				int auxN = lovers[i];
				string auxS = countries[i];
				lovers[i] = lovers[j];
				countries[i] = countries[j];
				lovers[j] = auxN;
				countries[j] = auxS;
			}
		}
	}
	
	for(int i = 0; i<k; i++){
		cout << countries[i] << " " << lovers[i] << endl;
	}
	
	return 0;
}
