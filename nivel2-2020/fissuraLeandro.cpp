#include <bits/stdc++.h>


using namespace std;

#define NMAX 505
int grafoM[NMAX][NMAX];

int n,f;//n = tamanho da matriz; f = força;
//bool marc[NMAX];
int movX[] ={1,-1,0,0};//movimentação entre as linhas
int movY[] ={0,0,1,-1};//movimentação entre as colunas 
//queue<pair<int,int>>fila;

bool dentro(int x, int y){//função responsavel por manter a busca dentro da matriz, evita q seja acessado memoria inexistente
    if(x>=1&&x<=n&&y>=1&&y<=n) return true;
    return false;
}

void dfs(int x,int y){//busca em em profundidade
    for(int i=0;i<4;i++){//movimentação pela a matriz
            int X = x + movX[i];//movimenta na linha(i)
            int Y = y + movY[i];//movimenta na coluna(j)
            if(dentro(X,Y)){
                if(grafoM[X][Y] <= f and grafoM[X][Y] != -1){//se o valor da posição for menor ou igual a força ele é atingido, 
                    grafoM[X][Y] = -1;// se for atingido o valor dele se torna -1
                    dfs(X,Y);
                }
                
            }
        }
}

int main(){
    //se a força for menor q o valor da primeira posição n acontece nada
    cin >> n >> f;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char c;
            cin >> c;
            int aux = c -'0';//trasforma o caracter em inteiro, usando a tabela ASCCI
            grafoM[i][j]=aux;//preenchendo a matriz
        }
    }
    if(grafoM[1][1] <= f){//se a primeira posição é menor ou igual a força, se chama a função bfs() 
        dfs(1,1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(grafoM[i][j] == -1)cout << '*';//para as posiçoes q foram preenchidas com -1 será impresso *
                else cout << grafoM[i][j]; 
            }
            cout << endl;
        }
    }
    else{// a primeira posição é maior q a força, entao nada muda
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << grafoM[i][j]; 
            }
            cout << endl;
        }
    }

}