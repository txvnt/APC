#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,P= 0,N = 0,I = 0;
	string s;
	cin>>n;
	cin.ignore();
	getline(cin, s);
	for(int i=0;i<n;i++){
		if( s[i] == 'N')
			N++;
		if( s[i] == 'P')
			P++;
		if( s[i] == 'I')
			I++;
	}
	if(P == N && I == 0)cout << "NO" << endl;
	else if(P>N && I < (P-N)) cout << "SI" << endl;
	else if(P<N){
		if(I < (N-P)) cout << "NO" << endl;
		else if(I == (N-P)) cout << "NO" << endl;
		else if(I > (N-P)) cout << "INDECISOS" << endl;
	}
	else cout << "INDECISOS" << endl;
	return 0;
}