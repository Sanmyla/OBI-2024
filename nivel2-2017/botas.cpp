#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;//numeros de sapatos
    vector<int>dir,esq;
    for(int i=0;i<n;i++){
        int tam;
        char lado;
        cin >> tam >> lado;
        if(lado == 'D')dir.push_back(tam);//sapatos direitos
        else esq.push_back(tam);//esquerdos
    }
    int res=0;
    for(int i=0;i<dir.size();i++){//percorrer o vetor de sapatos direitos
        for(int j=0;j<esq.size();j++){//percorrer o vetor de sapatos esquerdos
            if(dir[i] == esq[j] && dir[i] != 0 && esq[j] != 0){//verfica se tem o mesmo tamnho nos dois vetores
                res++;// a cada par feito aumenta 1 na resposta
                dir[i]=0;// zera os pares ja feitos
                esq[j]=0;
            }
        }
    }
    cout << res << endl;
    

}