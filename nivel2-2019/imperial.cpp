#include <bits/stdc++.h>

using namespace std;

/*Esse valor é a quantidade máxima de números da sequência que poderiam ser marcados com um círculo, de modo que a sequência de números marcados não contenha dois números iguais consecutivos e seja composta de no máximo dois números distintos.*/
vector<int>aux;

int main(){

    int n;
    cin >> n;
    vector<int>v(n);
    int v1max = -1, v2max= -1;
    for(int i=0;i<n;i++){
        cin >> v[i];
        /*for(int j=0;j<v.size();j++){
            if(v[i] == v[j] and i-j > 1 ) aux.push_back(v[i]);
        }*/
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i] == v[j])continue;
            int aux =j+1, cont=2;// aux = proxima posição; o cont começa no dois pois ja temos dois numeros
            else{

            }
        }
    }
    

    /*if(n==1){
        cout << 1 << endl;
        return 0;
    }
    cout << aux.size() << endl;*/

}