#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,c,m;
    cin >> n >> c >> m;
    vector<int>figC(c), marc;//carimbadas; vector marc serve para guardas as figurinhas ja compradas evitando as repetidas
    for(int i=0;i<c;i++){
        cin >> figC[i];//leitura das carimbadas
    }
    int aux, cont=c;// cont = carimbadas

    for(int i=0;i<m;i++){
        cin >> aux;//figurinha comprada
        if(i > 0){// n é a primeira
            bool verifc = true;
            for(int j=0;j<c;j++){//percorrendo as carimbadas
                if(aux == figC[j]){// figurinha é igual à alguma carimbada
                    for(int k=0;k<marc.size();k++){//percorrendo o vector marc para verificar se ela n é repetida
                        if(marc[k] == aux)verifc=false;//se a figurinha ja esta no vector marc ela sera marcada como falsa
                    }
                    if(verifc){// se verific esta true significa q é a primeira vez desa figurinha
                        cont--;//dimnuimos a quantidade de carimbadas q precisamos encontrar
                        marc.push_back(aux);//guardamos a figurinha no vector para n ser repetida
                    }
                    else continue;
                }
            }
        }
        else{//priemira figurinha
            for(int j=0;j<c;j++){
                if(aux == figC[j]){
                    cont--;
                    marc.push_back(aux);
                }
            }
        }
        
    }
    cout << cont << endl;
}