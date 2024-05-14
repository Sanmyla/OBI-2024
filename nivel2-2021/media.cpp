#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b;
    c = 2*a - b;
    int media = (c+b+a)/3;
    int v[3];
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(v,v+3);
    int mediana = v[1];
    cout << c;
}