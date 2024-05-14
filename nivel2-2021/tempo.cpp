#include <bits/stdc++.h>

using namespace std;

int main(){
    map <int,int>guarda,final, verifica;
    int tempo=0,n,p;
    vector <pair<int, int>>v;
    char c;
    cin >> n;
    while (n--){
        cin >> c >> p;
        if(c == 'T')tempo+=p-1;
        if(c == 'R'){
            tempo++;
            guarda[p] = tempo;
            verifica[p] = 0;
            if(final.find(p) == final.end())final[p]=0;
        }
        if(c == 'E'){
            tempo++;
            final[p] += tempo-guarda[p];
            verifica[p]=1;
        }
        for(auto it:final){
          if(verifica[it.first]==1)v.push_back({it.first, it.second}); 
        else v.push_back({it.first, -1}); 
    }
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    }


}