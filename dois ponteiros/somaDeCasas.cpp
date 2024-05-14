#include <bits/stdc++.h>

using namespace std;

/*int soma(int v[], int k, int n){
    int i=0,j=n-1;
    while(i < j){
        int s = v[i] + v[j];
        if(soma == k) return cout << v[i] << " " << v[j] << endl;
        else if(soma < x)i++;//anda para a esquerda
        else j++;//anda para a direita
    }
}*/

int main(){

    int n,k;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cin >> k;
    //soma(v,k,n);
    int i=0,j=n-1;
    while(i < j){
        int s = v[i] + v[j];
        if(s == k){
            cout << v[i] << " " << v[j] << endl;
            return 0;
        }
        else if(s < k)i++;//anda para a esquerda
        else j++;//anda para a direita
    }
}