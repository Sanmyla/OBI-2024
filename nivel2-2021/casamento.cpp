#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    //int aux;
   while(a.size() < b.size()) a = "0" + a;
   while (b.size() < a.size())b="0" + b;

   string resA="", resB="";

   for(ll i=0;i<a.size();i++){
        if(a[i] < b[i])resB+=b[i];
        else if(a[i] > b[i])resA+=a[i];
        else{
            resA+=a[i];
            resB+=b[i];
        }
   }
   ll contA=0,contB=0;
   if(resA == "")resA = "-1";
   if(resB == "")resB = "-1";
   
   for(ll i=0;i<resA.size();i++){
    if(resA[i] == '0')contA++;
    if(resB[i] == '0')contB++;
   }
   if(resA.size() == contA)resA="0";
   if(resB.size() == contB)resB="0";

    if(resA < resB)cout << resA << " " << resB << endl;
    else cout << resB << " " << resA << endl;

}