#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,cont=0;
    cin >> n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i != j and s[j].find(s[i]) != string::npos)cont++;
        }
    }
    cout << cont << endl;
    
}