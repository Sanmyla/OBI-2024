#include <bits/stdc++.h>

using namespace std;

int soma(int x){
    int soma =0;
    while (x>0){
        soma+=x%10;
        x/=10;
    }
    return soma;
}

int main(){
    int s, a,b;
    cin >> s >> a >> b;
    int cont=0;
    for(int i=a;i<=b;i++){
        if(soma(i) == s)cont++;
    }
    cout << cont << endl;
}