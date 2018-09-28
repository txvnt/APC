#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	char last = str[str.length()-1];
	int n = last - '0';
	if(n%2!=0){
		cout << "no" << endl;
	}else{
		int count = 0;
		for(int i = 0; i<str.length(); i++){
			int m = str[i] - '0';
			count+=m;
		}
		if(count%2!=0){
			cout << "no" << endl;
		}else{
			cout << "superpar";
		}
	}
	return  0;
}
