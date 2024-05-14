#include <bits/stdc++.h>

using namespace std;

#define NMAX 510
int idade[NMAX], vertice[NMAX];
vector<int>grafo[NMAX];
bool marc[NMAX];

int dfs(int u){
    marc[u] = 1;
    int auxIdade=idade[u];
    for(auto v: grafo[u]){
        if(marc[v]) continue;
        auxIdade = min(auxIdade, idade[v]);
        auxIdade = min(auxIdade, dfs(v));
    }
    return auxIdade;
}


int main(){
    // n empregados; m relações; i instruções
    int n,m,I;
    cin >> n >> m >> I;
    for(int i=1;i<=n;i++){//idade dos empregados
        cin >> idade[i];// vertice(i) é o empregado
        vertice[i]=i;
    }
    for(int i=1;i<=m;i++){//relações
        int x,y;
        cin >> x >> y;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    for(int i=1;i<=I;i++){
        char q;
        cin >> q;
        if(q == 'T'){
            int a,b;
            cin >> a >> b;//iram trocar de posição
            int aux = vertice[a];//trocando os vertices/indices
            vertice[a] = vertice[b];
            vertice[b] = aux;

            aux = idade[vertice[a]];//trocando as idades
            idade[vertice[a]] = idade[vertice[b]];
            idade[vertice[b]] = aux;
        }
        else{
            int p;
            cin >> p;
            p = vertice[p];
            if(grafo[p].size() == 0)cout << "*" << endl;
            else{
                memset(marc, 0, sizeof marc);
                cout << dfs(p) << endl;
            }
        }

    }

}