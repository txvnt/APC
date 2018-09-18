#include <bits/stdc++.h>
using namespace std;

int main()
{
	double ss, mm, hh = 0;
	double kilometers;
	double v = 0;
	
	double nowTime = 0;
	double lastTime = 0;
	
	char str[999];
	
	while(cin.getline(str, 999))
	{
		sscanf(str, "%lf:%lf:%lf", &hh, &mm, &ss);
		nowTime = hh + mm/60 + ss/3600; 
		kilometers += (nowTime - lastTime)*v;
		if(str[8] == '\0')
		{ //Solo el tiempo;
			cout << setprecision(2) << fixed << setfill('0');
			cout << str << " " << kilometers << " km" << endl;
			//printf("%s %.2lf km\n", str, kilometers);
		}
		else
		{ //tiempo y cambio de velocidad
			sscanf(str+8, "%lf", &v);
		}
		
		lastTime = nowTime;
	}
	return 0;
}
