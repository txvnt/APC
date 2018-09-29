#include <bits/stdc++.h>
using namespace std;
int main() {
	long long D, N, M, D1, D2;
	cin >> D >> N >> D1 >> M >> D2;
	long long R = 2*D, cont = 0;
	if(N == 0 && M == 0) {
		cont = -1;
	}
	while(N-- && R>=0){
		R-=D1;
		cont++;
		R=R*2;
	}
	while(M-- && R>=0){
		R-=D2;
		cont++;
		R=R*2;
	}
	if(R>=0){
		cont = -1;
	}
	cout << cont << endl;
	return 0;
}