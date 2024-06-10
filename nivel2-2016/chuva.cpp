#include <bits/stdc++.h>

using namespace std;
#define NMAX 100006
bool verifica[NMAX];
int main(){
    /*
    Comece verificando a primeira seção (a mais à esquerda).
    Se a altura dessa seção for maior ou igual a 1 metro, ela estará coberta de água.
    Continue verificando as seções subsequentes. Se a altura de uma seção for maior ou igual a 1 metro e a seção anterior também estiver coberta de água, essa seção também estará coberta.
    Repita o passo 3 até chegar à última seção.
    Conte o número total de seções que estão cobertas de água seguindo esse procedimento. Esse será o resultado final.
  
    */
    int n,res=0;
    //bool verifica = false;
    cin >> n;
    int v[n];
    for(int i=1;i<=n;i++)cin >> v[i];
    if(v[1] >= 1)verifica[1]=true;
    for(int i=2;i<=n;i++){
        if(verifica[i-1] == true and v[i] >= v[i-1] ){
            res++;
            verifica[i]=true;
        }
       /* else if (v[i] <= v[i-1] and verifica[i-1] == true){
            res++;
            verifica[i]=true;
        }*/
    }
    cout << res << endl;
}