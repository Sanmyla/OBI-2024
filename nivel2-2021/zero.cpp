#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout << "Hello wolrd";
    cin >> n;
    vector<int>v;
    int aux,soma=0;
    for(int i=0;i<n;i++){
        cin >> aux;
        if(aux == 0)v.pop_back();
        else v.push_back(aux);
    }
    for(int i=0;i<v.size();i++)soma+=v[i];
    cout << soma << endl;

}
