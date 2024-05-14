#include <bits/stdc++.h>

using namespace std;

#define NMAX 510

char grafoM[NMAX][NMAX];//ciação da matriz

int n,m;

/*
       |
.......o......
.###...####.#.
..............
..######......
..............
.#.####....##.
..............
.....####.....
..............
*/
// . = parede
// # = prateleira
// o = goteira
void dfs(int x,int y){

    if(grafoM[x+1][y] == '.'){// se na linha de baixo na msm coluna for igual a parede, ficara molhada
        grafoM[x+1][y] = 'o';
        dfs(x+1,y);// proxima linha
    }
    if(grafoM[x][y+1] == '.' and grafoM[x+1][y] == '#'){// se na coluna seguinte for parede e na linha seguinte for prateleira, molha
        grafoM[x][y+1] = 'o';
        dfs(x,y+1);//proxima coluna
    }
    if(grafoM[x][y-1] == '.' and grafoM[x+1][y] == '#'){//coluna seguinte for parede e linha anterior e coluna seguinte for prateleira
        grafoM[x][y-1] = 'o';
        dfs(x,y-1);// coluna anterior
    }
    return;
}

int main(){
    int xIni,yIni;
    cin >> n >> m;// n=linha; m=coluna
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> grafoM[i][j];//leitura da matriz
            if(grafoM[i][j] == 'o'){//guardando a posição da goteira inicial
                xIni = i;
                yIni = j;
            }
        }
    }

    dfs(xIni,yIni);//começaremos da posição da goteira

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << grafoM[i][j];
        }
        cout << endl;
    }

}