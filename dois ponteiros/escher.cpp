#include <bits/stdc++.h>

using namespace std;

bool ver(int v[], int n){
    int i=0, j=n-1, soma=0;
    soma = v[i] + v[j];
    while(i<j){
        i++;
        j--;
        if(soma != v[i]+v[j])return false;
        soma = v[i]+v[j];
    }
    return true;
}

int main(){

    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    //int i=0, j=n-1, sa=0;
    //sa = v[i]+v[j]; 
    //for(int k=1;k <n-2; k++){
        if(!ver(v,n))cout << 'N' << endl;
        else cout << 'S' << endl;
    //}
    

}