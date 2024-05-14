#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;//num de premiados;
    cin >> n;
    int t,contp=0,contm=0;//t = tamanhos; contp = contador de camisetas pequenas; contm = contador de camisetas médias
    for(int i=0;i<n;i++){
        cin >> t;
        if(t == 1)contp++;// se tamanho for 1 incrementa o contador de camsetas pequenas
        else contm++;// se for 2 incrementa o contador de camisetas médias
    }
    int p,m;
    cin >> p >>m;//leitura da quantidade de camisetas pequenas e médias q foram produzidas
    if(contp >= p and contm >= m)cout << "S" << endl;//se a quantidade de camisetas solicitadas é maior ou igual a quantidade q foi produzida
    else cout << "N" << endl;//se n for imprima 'N';

}
