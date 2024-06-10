#include <bits/stdc++.h>

using namespace std;

int main(){

    string s,aux;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
       if(s[i] == ' ')aux+=s[i];
       else if(s[i] == 'p'){
        i++;
        aux +=s[i];
       }
    }
    cout << aux << endl;

}
