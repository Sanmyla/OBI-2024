#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;//qtd chocolates
    vector<int>v;
    for(int i=0;i<n;i++){//preenchendo o valor de cada chcolate
        int p;
        cin >> p;
        v.push_back(p);
    }
    sort(v.begin(),v.end(),greater<int>());//ordenando o vetor de valores
    int soma=0;
    if(n%3 == 0){//verificando se a qtd é divisivel por 3, para fazer trios exatos
        for(int i=0;i<n;i+=3){
            soma+=v[i]+v[i+1];//os trios são feitos com os maiores valores
            //para poder alcançar um maior desconto 
            //exemplo: 10 10 8; o total 10+10=20; 8 sai de graça
        }
        
    }
    else if(n%3 == 1){//sobra um 1 valor
        for(int i=0;i<n-2;i+=3){
            soma+=v[i]+v[i+1];
        }//exemplo: 2 | 4 5 5 | 8 10 10 ---- o valor 2 sobrou  
        soma+=v[n-1];//o valor q sobrou é somado após ser feita toda a separação dos trios
    }
    else if(n%3 == 2){//sobra dois valores
        for(int i=0;i<n-3;i+=3){
            soma+=v[i]+v[i+1];
        }//exemplo: 2 4 |5 5 8 | 10 10 20 ---- os valores 2 e 4 sobraram  
        soma+=v[n-1]+v[n-2];//os dois valores são somados após a separação dos trios
    }
    cout << soma << endl;
}
