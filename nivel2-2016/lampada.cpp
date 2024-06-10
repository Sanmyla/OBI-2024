#include <bits/stdc++.h>

using namespace std;

int main(){
    
    bool a,b,fA,fB;
    cin >> a >> b >> fA >> fB;
    int res=0;//qtd vezes q as lampadas trocam de estado
    
    if(b != fB){//Interruptor C2 lampada A e B troca de estado
        res++;
        if(a == 0)a=1;
        else a =0;
    }
    if(a!=fA)res++;//Interruptor C1 lampada A troca de estado
    
    cout << res << endl;
}