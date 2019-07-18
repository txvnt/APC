#include <iostream>
#include <math.h>

using namespace std;
bool integer(long double);
bool isPrime(int);

int main(){
    int a;
    cin >> a;
    while(a--){
        long double x;
        cin >> x;
        if(x==1){
            cout << "NO" << endl;
        }else{
            long double sqr = sqrt(x);
            if(integer(sqr)){
                if(isPrime(sqr)) cout << "YES" << endl;
                else cout << "NO" << endl;
            }else{
                cout << "NO" << endl;
            } 
        }
    }
}

bool integer(long double k)
{
    return k == (long double)(int)k;
}

bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

