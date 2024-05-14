#include <iostream>

using namespace std;

int main() {
    int n, h, cont=0,aux;
    cin >> n >> h;
    //int v[n];
    for(int i=0;i<n;i++){
        cin >> aux;
        if(aux <= h)cont++
    }
    cout << cont << endl;
}
