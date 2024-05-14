#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k;
    cin >> n >> k;
    vector<int>ret(n);
    int soma=0,cont=0;
    for(int i=0;i<n;i++){
        cin >> ret[i];
        if(soma < k and ret[i]<k){
            soma+=ret[i];
            if(soma == k){
                cont++;
                cout << cont << "  ";
            }
        }
        else soma=0;
    }
    cout << endl << cont  << endl;

}