#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int m,a,b;
    cin >> m >> a >> b;
    int idade = m-(a+b);
    int v[3];
    v[0] = a;
    v[1] = b;
    v[2] = idade;
    sort(v,v+3);
    cout << v[2] << endl;
    
}