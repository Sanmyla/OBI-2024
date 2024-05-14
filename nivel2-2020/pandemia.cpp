#include <bits/stdc++.h>

using namespace std;

vector<int>reuniao[1010];//vector de vectores; para guardar os dados de cada reuniao
int marc[1010];//0; // marcador de infectados

//vector<int> marc[1010]; estava acessando memoria inexistente "segention fault"

int main(){
    int n,m;//n = num de amigos, m = dia q teve reunião;
    cin >> n >> m;
    int I,R;// i = amigo infectado, r = primeira reuniao q ele foi
    cin >> I >> R;
    
    
    for(int i=1;i<=m;i++){
        int qtd;
        cin >> qtd;//qtd de amigos q vai na reuniao i
        for(int j=0;j<qtd;j++){
            int amig;
            cin >> amig;
            reuniao[i].push_back(amig);//colocando o amigo no vector da reuniao i
        }
    }
    marc[I]=1;//amigo i esta infectado, entao todos os amigos q estiverem com o valor 1 tbm estara
    for(int i=R;i<=m;i++){//percorrer todas as reunioes q oo primeiro amigo infectado foi
        bool verifc=false;
        for(int j=0;j<reuniao[i].size();j++){
            if(marc[reuniao[i][j]] == 1)verifc=true;//se na reuniao i, tiver alguem infectado, iremos marcar no verificador
        }
        
        if(verifc == true){//se o verificador for verdadeiro, quer dizer q tem alguem infectado nessa reuniao
            for(int j=0;j<reuniao[i].size();j++){//entao todos presentes tbm vao ficar infectados
                marc[reuniao[i][j]]=1;
            }
        }
    }
    
    int res=0;
    for(int i=1;i<=n;i++){//para fazer a contagem final de quantos amigos ficaram infectados
        if(marc[i] == 1)res++;
    }
    cout << res << endl;
    
}
