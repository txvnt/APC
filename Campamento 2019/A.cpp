#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if(c == 0){
        if(a==b) cout << "YES";
        else cout << "NO";
    }
    else if(((b-a)>0 && c<0) || ((b-a)<0 && c>0)) cout << "NO";
    else{
        if((b-a)%c == 0){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }
}