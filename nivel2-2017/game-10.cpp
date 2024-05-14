#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n,d,a,cont=0;
    cin >> n >> d >> a;
    if (a < d){// se a posição do aviao esta antes do disco
        for(int i=a;i<d;i++){
            cont++;// se sim é só acrescentar até chegar no disco
        }
    }
    else if(a > d){//se o aviao esta depois do disco
        int auxC=0;
        for(int i=a;i<n;i++){//primeiro temos q chegar no final
            auxC++;
        }
        for(int i=1;i<=d;i++){//depois começamos no 1, e contamos até chegar no disco
            cont++;
        }
        cont += auxC;// soma as duas distacias(do aviao ao final e do inicio ao disco)
    }
    cout << cont << endl;
    
    
}