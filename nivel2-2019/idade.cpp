#include <bits/stdc++.h>

using namespace std;

int main(){

    int iMonica, i1, i2;
    cin >> iMonica >> i1 >> i2;
    int i3 = iMonica-(i1+i2);//idade do terceiro filho
    int v[3];//vetor para guardar a idade de todos os filhos
    v[0]=i1;
    v[1]=i2;
    v[2]=i3;
    sort(v,v+3);//ordenando crescentemente para imprimir o filho mais velho
    cout << v[2] << endl;

}