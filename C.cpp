#include <bits/stdc++.h>
using namespace std;
int main(){	
	string initial = "4624832612";
	string repeatedChars = "24832612"; // 0 - 7
	int indexes[4];
	cin >> indexes[0] >> indexes[1] >> indexes[2] >> indexes[3];
	for(int i = 0; i<4; i++){
		if(indexes[i] < 10){
			cout << initial[indexes[i]-1];
		}else{
			int resto = indexes[i]%8;
			int index = 0;
			switch(resto){
				case 0:
					index = 5;
					break;
				case 1:
					index = 6;
					break;
				case 2:
					index = 7;
					break;
				default:
					index = resto-3;
					break;
			}
			cout << repeatedChars[index];
		}
	}
	cout << endl;
	return 0;
}