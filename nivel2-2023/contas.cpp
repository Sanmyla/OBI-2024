#include <bits/stdc++.h>

using namespace std;

int main(){

    int v,s=0;
    cin >> v;
    int c[3];
    for(int i=0;i<3;i++){
        cin >> c[i];
        s+=c[i];
    }
    if(s <= v){
        cout << 3 << endl;
        return 0;
    }
    sort(c,c+3);
    if(c[0] > v)cout << 0 << endl;
    else if(c[0] <= v and c[0]+c[1]>v)cout << 1 << endl;
    else if(c[0]+c[1] <= v and c[0]+c[1]+c[2]>v)cout << 2 << endl;
   
}