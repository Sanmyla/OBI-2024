#include <bits/stdc++.h>

using namespace std;

#define NMAX 500000
typedef long long int ll;
ll v[NMAX];

int main(){
    
    ll n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    ll aux=0,cont=0;
    for(ll i=0;i<n;i++){
        aux+=v[i];
        if(aux == k)cont++;
        for(ll j=i+1;j<n;j++){
            aux+=v[j];
           // cout << aux << " - ";
            if(aux == k)cont++;
            else if(aux>k){
                //cout << cont << (aux) << endl;
                break;
            }
        }
        aux=0;
    }
    cout << cont << endl;
    
   
}