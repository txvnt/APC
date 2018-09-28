#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n;
	int a = 0;
	int b = 0; //a -> martina, b-> benja
	int c = 0;
	while(n--){
		m = 0;
		int x = 0;
		int y = 0;
		cin >> m;
		for(int i = 0; i<m; i++){
			getchar();
			int aux = 0;
			cin >> aux;
			if(aux == 0){
				x++;
			}else{
				y++;
			}
		}
		if (x == y){
			c++;
		}else if(x>y){
			a++;
		}else if(x<y){
			b++;
		}
	}
	
 	cout << a << " " << b << " " << c << endl;
 	
	return 0;
}
