#include <bits/stdc++.h>

using namespace std;

int main(){
    string p;
    cin >> p;
    bool igual=true;
    for(int i=0;i<p.size();i++){
        if(p[i]!=p[i+1] and i < p.size()-2 )igual = false;
    }
}