/*CORRETO*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    double p1,p2,p3,p4;
    cin >> p1 >> p2 >> p3 >> p4;
    double m= ((p1*1)+(p2*2)+(p3*3)+(p4*5))/11;
    cout << fixed << setprecision(2);
    cout << m  << endl;
    if(m >= 6)cout << "classificado" << endl;
    else cout << "desclassificado" << endl;
}