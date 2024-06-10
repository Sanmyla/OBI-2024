#include <bits/stdc++.h>

using namespace std;

#define NMAX 510

int n,m;
char grafoM[NMAX][NMAX];

void dfs(int x, int y){
    if(grafoM[x+1][y] == '.'){
        grafoM[x+1][y] = 'o';
        dfs(x+1,y);//próxima linha
    }
    else if(grafoM[x+1][y] == '#' and grafoM[x][y+1] == '.'){
        grafoM[x][y+1] = 'o';
        dfs(x,y+1);//proxima coluna
    }
    else if(grafoM[x][y-1] == '.' and grafoM[x+1][y] == '#'){
        grafoM[x][y-1] = 'o';
        dfs(x,y-1);// coluna anterior
    }
    return;
}

int main(){
    
    int xIni,yIni;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> grafoM[i][j];
            if(grafoM[i][j] == 'o'){
                xIni = i;
                yIni = j;
            }
        }
    }
    dfs(xIni,yIni);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << grafoM[i][j];
        }
        cout << endl;
    }
    
}