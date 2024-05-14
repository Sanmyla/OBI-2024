/*CORRETO*/
#include <bits/stdc++.h>

using namespace std;

vector<pair<string,string>>add;
vector<string>cod;
int main(){

    string c;
    while(cin >> c){
        if (c == "0")break;
        string a,l;
        cin >> a >> l;
        if(a == "adicionar")add.push_back({c,l});
        else{
            for(int i=0;i<add.size();i++){
                if(c == add[i].first){
                    //cout << add[i].first << " - " << cod[i] << " " ;
                    add[i].second = "";
                }    
            }    
        }
        cod.push_back(c);
    }
    for(int i=0;i<add.size();i++){
        if(add[i].second == "")cout << add[i].first << " nao encontrado" << endl;
        else cout << add[i].first << " " << add[i].second << endl;
    }
}
/*A001 adicionar prateleira1
B002 adicionar prateleira2
A001 remover prateleira1
C003 adicionar prateleira3
B002 remover prateleira
C003 remover prateleira3
D004 adicionar prateleira4*/

/*A001 adicionar prateleira1
B002 adicionar prateleira2
A001 remover rateleira1
A001 - A001 
C003 adicionar prateleira3
B002 remover prateleira2
B002 - B002 
C003 remover prateleira3
C003 - A001 */