#include <bits/stdc++.h>
using namespace std;
#define NMAX 1010
typedef pair<int,int> pii;


int matriz[NMAX][NMAX];//grafo
int dist[NMAX][NMAX];//distancia entre cada vertice
int resp=-1;
int N,M;
int mov_x[] = {1,-1,0,0};// movimentação dentro da matriz (linha x ou i)
int mov_y[] = {0,0,1,-1};// coluna y ou j


bool dentro(int x, int y){// responsavel por não deixar acessar memoria inexistente 
    if(x>=1&&x<=N&&y>=1&&y<=M) return true;
    return false;
}


void BFS(int l, int c){//bfs (breadth first search) - busca em largura
    dist[l][c] = 1;
    queue<pii>fila;
    fila.push({l,c});
    while(!fila.empty()){//enquanto ter elementos na fila
        int x = fila.front().first;//pegamos a primeira posição
        int y = fila.front().second;
        fila.pop();//e apagamos da fila 
        for(int i=0;i<4;i++){//movimentação
            int X = x + mov_x[i];//para os lados
            int Y = y + mov_y[i];// para cima ou para baixo
            if( dentro(X,Y) && matriz[X][Y]==1 && dist[X][Y]==-1){
                dist[X][Y] = dist[x][y]+1;
                fila.push({X,Y});
            }
            if( dentro(X,Y) && matriz[X][Y]==3 && dist[X][Y]==-1){
                resp = dist[x][y]+1;
                return;
            }
        }
    }
}


int main(){
    
    int i,j,i_ini,j_ini;
    cin >> N >> M;
    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            dist[i][j] = -1;
            cin >> matriz[i][j];
            if(matriz[i][j] == 2){//onde a Emilia esta
                i_ini = i;
                j_ini = j;
            }
        }
    }
    BFS(i_ini,j_ini);
    cout << resp << endl;
}
