#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    int vx[n],vy[n];
    for(int i=0;i<n;i++){
        cin >> vx[i] >> vy[i];
    }
    sort(vx,vx+n,greater<int>());
    int vX[n], vY[n];
    for(int i=0;i<n-1;i++){
        if(vx[i] == vx[i+1]){
            if(vy[i] > vy[i+1]){
                vX[i] = vx[i];
                vY[i] = vy[i];
                vX[i+1] = vx[i+1];
                vY[i+1] = vy[i+1];
            }
            if(vy[i] < vy[i+1]){
                vX[i+1] = vx[i+1];
                vY[i+1] = vy[i+1];
                vX[i] = vx[i];
                vY[i] = vy[i];
            }
        }
        else{
            vX[i] = vx[i];
            vY[i] = vy[i];
        }
    }
    for(int i=0;i<n;i++){
        cout << vX[i] << " - " << vY[i] << endl;
    }
    
    /*vector<pair<int,int>>tendas;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        tendas.push_back({x,y});
    }
    int cont=1;
    sort(tendas.begin(),tendas.end());
    sort(tendas.begin(),tendas.end(), greater<pair>());
    
    vector<pair<int,int>> tendasOrd;
    for(int i =tendas.size()-1;i>0;i++){
        int x1 = tendas[i].first;
        int y1 = tendas[i].second;
        int x2 = tendas[i+1].first;
        int y2 = tendas[i+1].second;
        if(x1 == x2){
            //ordenar(tendas);
            if(y1 > y2){
                tendasOrd.push_back({x1,y1});
                tendasOrd.push_back({x2,y2});
            }
            else if(y2 > y1){
                tendasOrd.push_back({x2,y2});
                tendasOrd.push_back({x1,y1});
            }
        }
        else tendasOrd.push_back({x1,y1});
    }
    for(int i=0;i<tendasOrd.size();i++){
        cout << tendasOrd[i].first << " - " << tendasOrd[i].second << endl;
    }*/
}