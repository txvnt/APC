#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, current;
    long long max = 0;
    long long min = 10e10;
    long long contMin=0, contMax=0;
    cin >> n;
    int aux = n;
    while(aux--){
        cin >> current;
        if(current < min){
            min = current;
            contMin=1;
        }else if(current == min) contMin++;

        if(current > max){
            max = current;
            contMax=1;
        }else if(current == max) contMax++;
    }

    if(contMax == n){
        long long combinaciones = 0;
        for(long long i=1; i<=n-1;i++){
            combinaciones +=i;
        }
        cout << "0 " << combinaciones << endl;
    }else cout << max-min << " " << contMax*contMin << endl;
}