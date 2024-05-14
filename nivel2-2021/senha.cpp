#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll n,m,k,p;
vector<string>poss,palavras;

void geradorPoss(string senha, ll i){//backtracking - função recurssiva
    if(i == m){//i contador = m caracteres borrados
        poss.push_back(senha);
        return;
    }

    for(char letra: palavras[i]){
        geradorPoss(senha+letra,i+1);//vai preencher todas as possibilidades
    }
}

int main(){
    string senha;
    cin >> n >> m >> k;//senha tem N caracteres; M letras borradas; K comprimeno das palavras possiveis
    //cin.ignore();
    cin >> senha;
    palavras.resize(m);
    for(ll i=0;i<m;i++){
        cin >> palavras[i];
    }
    cin >> p;

    geradorPoss("",0);
    sort(poss.begin(), poss.end());

    string res="";
    ll j=0;
    for(ll i=0;i<n;i++){
        if(senha[i] == '#')res+=poss[p-1][j++];
        else res+=senha[i];
    }
    cout << res << endl;
}