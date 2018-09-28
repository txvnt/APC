#include <bits/stdc++.h>
using namespace std;
int main(){
	double x,y,z; 
	cin >> x >> y >> z;
	double r = x/(z - y); 
	double aux = r;
	int cont = 0;
	while(aux >= 1){
		cont++;
		aux /= 10;
	}
	cont = (cont*2)+1;
	double newPages = x/(z-(y+cont));
	int result = ceil(newPages);
	cout << result;
	return 0;
}
