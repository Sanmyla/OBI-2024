#include <bits/stdc++.h>

using namespace std;


int main(){
    
    pair<int,string>res;
    int n,vMax=-100000;
    cin >> n;
    int valor[n];
    string nomes[n];
    for(int i=0;i<n;i++){
        cin >> nomes[i] >> valor[i];
        if(valor[i] > vMax){
            vMax = valor[i];
            res.first = valor[i];
            res.second = nomes[i];
        }
    }
    cout << res.second << endl << res.first << endl;
    
}