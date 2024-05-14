#include <bits/stdc++.h>


using namespace std;

#define NMAX 505
char grafoM[NMAX][NMAX];

int n,f;//n = tamanho da matriz; f = força;
bool marc[NMAX][NMAX];
int movX[] ={1,-1,0,0};//movimentação entre as linhas
int movY[] ={0,0,1,-1};//movimentação entre as colunas 


bool dentro(int x, int y){//função responsavel por manter a busca dentro da matriz, evita q seja acessado memoria inexistente
    if(x>=1&&x<=n&&y>=1&&y<=n) return true;
    return false;
}

void dfs(int x,int y){//busca em em profundidade
    marc[x][y] = true;//marca como visitado
    if(grafoM[x][y]-'0'<=f)grafoM[x][y] = '*';//se a primeira posição for menor q a força 
    else return;// se não, n precisa mudar nada
    for(int i=0;i<4;i++){//movimentação pela a matriz
            int X = x + movX[i];//movimenta na linha(i)
            int Y = y + movY[i];//movimenta na coluna(j)
            if(dentro(X,Y)){
                if(grafoM[X][Y]-'0' <= f and marc[X][Y] == false){//se o valor da posição for menor ou igual a força ele é atingido,
                    grafoM[X][Y] = '*';//marca as posições afetadas
                    marc[X][Y] = true;//marca como visitado
                    dfs(X,Y);
                }
                
            }
        }
}

int main(){
    
    cin >> n >> f;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            //char c;
            cin >> grafoM[i][j];
            //int aux = c -'0';//trasforma o caracter em inteiro, usando a tabela ASCCI
            //grafoM[i][j]=aux;//preenchendo a matriz
        }
    }
        dfs(1,1);//chama a função
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << grafoM[i][j]; 
            }
            cout << endl;
        }

}