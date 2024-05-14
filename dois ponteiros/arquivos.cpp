#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

ll soma(ll v[], ll b, ll n){
    int i=0,j=n-1,res=0;
    while(i <= j){
        res++;
        if(v[i]+v[j] <= b)i++;
        j--;
    }
    return res;
}

int main() {
    ll n, b;
    cin >> n >> b;
    ll v[n];
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v, v + n);
    
    cout << soma(v, b, n) << endl;
}
