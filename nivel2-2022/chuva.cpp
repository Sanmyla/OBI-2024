#include <bits/stdc++.h>

using namespace std;

#define NMAX 100000
int v[NMAX];

int main(){
    
    int n,s;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int aux=0,cont=0;
    for(int i=0;i<n;i++){
        aux+=v[i];
        if(aux == s)cont++;
        for(int j=i+1;j<n;j++){
            aux+=v[j];
           // cout << aux << " - ";
            if(aux == s)cont++;
            else if(aux>s){
                //cout << cont << (aux) << endl;
                break;
            }
        }
        aux=0;
    }
    cout << cont << endl;
    
   
}