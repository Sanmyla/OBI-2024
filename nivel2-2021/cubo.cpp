#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool elevado(ll x){
    int raiz_quadrada = sqrt(x);
    int raiz_cubica = cbrt(x);
    if(raiz_quadrada * raiz_quadrada == x && raiz_cubica * raiz_cubica * raiz_cubica == x){
        return true;
    }
    return false;
}

int main(){
    ll a, b, cont = 0;
    cin >> a >> b;

    for(ll i = a; i <= b; i++){
        if(elevado(i)) cont++;
    }
    cout << cont << endl;
}
