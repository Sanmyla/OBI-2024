#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int i=0, j=n-1, cont=0;
    while(i <= j){
        if(v[i] == v[j])i++,j--;

        else if(v[i] < v[j]){
            i++;
            v[i] += v[i-1];
            cont++;
            //v[j] = v[i];
        }
        else {
            j--;
            v[j] += v[j+1];
            cont++;
        }
    }
    cout << cont << endl;
}