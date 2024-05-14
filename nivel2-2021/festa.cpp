#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>sud,res(n);
    for(int i=1;i<=n;i++){
        sud[i-1]=i;
    }
    for(int i=0;i<m;i++){
        int auxt;
        cin >> auxt;
        for(int j=0;j<n;j++){
            if(auxt != sud[j] and auxt%sud[j] == 0)sud.erase(sud.begin()+j);
        }
    }
    for(int i=0;i<sud.size();i++){
        cout << sud[i] << endl;
    }
}
