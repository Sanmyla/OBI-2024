#include <bits/stdc++.h>

using namespace std;

int main(){
    bool verifica=true;//se tem um par de chaves
    stack<char>c;
    string s;
    int n;
    cin >> n;
    cin.ignore();//buffer
    while(n--){
        getline(cin,s);//leitura das linhas

        for(int i=0; i<s.size(); i++){
            if(s[i] == '{')c.push(s[i]);//se o carcter for igual a chave abrindo, colocaremos ele na pilha(ele ficara na primeira posição)
            if(s[i] == '}'){// se for chave fechando
                if(c.size() > 0 && c.top() == '{')c.pop();//verificaremos se o topo da pilha é igual a uma chave abrindo. Se for apagaremos
                else verifica = false;
            }
        }

    }
    if(c.size()>0)verifica=false;//quer dizer q ficou sobrando ou faltando alguma chave
    if(verifica == true)cout << 'S' << endl;
    else cout << 'N' << endl;



}
