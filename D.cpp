#include <bits/stdc++.h>
using namespace std;
int main(){
	int total, desc;
	cin >> total >> desc;
	float puntajeEsperado = total-1;
	float puntajes[total];
	for(int i = 0; i<total; i++){
		puntajes[i] = puntajeEsperado;
		puntajeEsperado -= 0.5;
	}
	int posicionEsperada = total-desc-1;
	cout << setprecision(1) << fixed << setfill('0');
	cout << puntajes[posicionEsperada] << endl;
	return 0;
}