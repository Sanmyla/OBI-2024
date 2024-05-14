#include <bits/stdc++.h>

using namespace std;

int main(){

    int d;
    cin >> d;//leitura da distancia percorrida
    // 3 é a distancia do emissor ate o acelerador
    // 8 é o tamanho da circuferencia que vai ser percorrido
    // o resto da divisão vai ser quantos trassinhos vai andar a mais
    if((d-3)%8 == 3)cout << "1";//do inicio do acelerador até o sensor 1 é 3 
    else if((d-3)%8 == 4)cout << "2";//do inicio do acelerador até o sensor 2 é 4
    else if((d-3)%8 == 5)cout << "3";//do inicio do acelerador até o sensor 3 é 5


}
