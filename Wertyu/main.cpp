#include <bits/stdc++.h>
using namespace std;

int main()
{
  string original = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  
  string str;
  
  while(getline(cin, str)){
    for(int i = 0; i<str.size();i++){
        if(str[i] == ' '){
            cout << " ";
        }else{
            for(int j = 0; j < original.size(); j++){
                if(original[j] == str[i]){
                    cout << original[j-1];
                }
            }
        }
    }
    cout << endl;
  }
  return 0;
}

