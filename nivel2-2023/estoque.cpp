#include <bits/stdc++.h>

using namespace std;

# define NMAX 505
int mat[NMAX][NMAX];

int main(){
    
    int n,m,p,vendas=0;
    cin >> n >> m;
    int mat[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> mat[i][j];
        }
    }
    cin >> p;
    for(int i=1;i<=p;i++){
        int tipo,tam;
        cin >> tipo >> tam;
        if(mat[tipo][tam] > 0){
            mat[tipo][tam]--;
            vendas++;
        }
    }
    cout << vendas << endl;
    
}