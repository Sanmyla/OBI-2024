#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;//n palitos; m = palito maximo
    if(m*3 < n)cout << 0 << endl;
    /*else{
        
    }*/
    cout << m/9;
}
