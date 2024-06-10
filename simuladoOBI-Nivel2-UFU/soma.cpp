#include <bits/stdc++.h>

using namespace std;

#define NMAX 500003
int v[NMAX];

int main(){

    int n,k;
    cin >> n >> k;
    
    v[n+1]=-1;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int soma=0,cont=0;
    for(int i=0;i<n;i++){
        if(soma < k and v[i]<k or v[i] == 0){
            soma+= v[i];
            if(soma>k){
                soma-=v[i];
                soma=0;
            }
            //cout << soma << "<- soma ***";
        }
        if (soma == k){
            cont++;
            if(v[i+1] != 0)soma=0;
            //cout <<endl<< "Contador = "<<cont << endl;
        }
        if (v[i] == k ){
            cont++;
            soma=0;
            //cout << "Contador (v[i]=k) = "<<cont << endl;
        }
    }
    
    cout << cont << endl;
}