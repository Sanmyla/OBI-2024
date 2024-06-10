#include <bits/stdc++.h>

using namespace std;

int main(){

    int c[4];//cores da cobra
    for(int i=0;i<4;i++){
        cin >> c[i];
    }
    if(c[0] == c[3])cout << 'F' << endl;// se o primeiro numero/cor for igual ao último é uma cobra coral falsa
    else cout << 'V' << endl;// se não, ela é verdadeira
}
