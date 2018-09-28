#include <bits/stdc++.h>
using namespace std;
int main(){
	//POR ARREGLAR +- 1 PAGINA
	int x,y,z; 
	cin >> x >> y >> z;
	int r = x/(z-y + 1);
	int aux = r;
	int cont = 1;
	while(aux > 9){
		cont++;
		aux /= 10;
	}
	cont = (cont*2)+1;
	cout << x/(z-(y+cont));
	return 0;
}
