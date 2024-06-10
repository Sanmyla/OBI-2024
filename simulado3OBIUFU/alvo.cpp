#include <bits/stdc++.h>

using namespace std;


int main(){
    
    long long int alvo;
    int n;
    cin >> n >> alvo;
    long long int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    
    for(int i=0;i<n;i++){
        long long int soma=p[i];
        for(int j=1;j<n;j++){
            soma+= p[j];
            if(soma == alvo){
                cout << 'S' << endl;
                return 0;
            }
            else if(soma> alvo){
                //soma=0;
                break;
            } 
        }
    }
    cout << 'N' << endl;
    
    
}