#include <bits/stdc++.h>

using namespace std;

int main(){

    int l,c;
    cin >> l >> c;
    cout << 2 * l * c - (l+c) +1 << endl;//qtd lajotas tipo 1
    cout << 2 * (l+c-2) << endl;//qtd lajotas tipo 2
}