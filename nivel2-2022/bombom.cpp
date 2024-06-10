#include <bits/stdc++.h>

using namespace std;

int main(){
    
    /*
    C = copa E = espadas O = ouros P = paus
    
    A = Ás
    J = Valete
    Q = Dama
    K = Rei
    */
    string dom;
    cin >> dom;
    string auxL, auxE;
    int contL =0, contE=0;
    for(int i=0;i<6;i++){
        if(i<3){
            cin >> auxL;
            if(auxL[1] == dom[1]){
                if(auxL[0] == 'A')contL+=14;
                else if(auxL[0] == 'J')contL+=15;
                else if(auxL[0] == 'Q')contL+=16;
                else if(auxL[0] == 'K')contL+=17;
            }
            else{
                if(auxL[0] == 'A')contL+=10;
                else if(auxL[0] == 'J')contL+=11;
                else if(auxL[0] == 'Q')contL+=12;
                else if(auxL[0] == 'K')contL+=13;
            }
        }
        else{
            cin >> auxE;
            if(auxE[1] == dom[1]){
                if(auxE[0] == 'A')contE+=14;
                else if(auxE[0] == 'J')contE+=15;
                else if(auxE[0] == 'Q')contE+=16;
                else if(auxE[0] == 'K')contE+=17;
            }
            else{
                if(auxE[0] == 'A')contE+=10;
                else if(auxE[0] == 'J')contE+=11;
                else if(auxE[0] == 'Q')contE+=12;
                else if(auxE[0] == 'K')contE+=13;
            }
        }
    }
    if(contE > contL)cout << "Edu" << endl;
    else if(contL > contE)cout << "Luana" << endl;
    else cout << "empate" << endl;

    return 0;
}