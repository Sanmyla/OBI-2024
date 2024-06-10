#include <bits/stdc++.h>

using namespace std;

#define NMAX 100000
int vD[NMAX],vE[NMAX];
char pecas[NMAX];

int main(){

   int n;
   cin >> n;
   string res="";
   int id;
   for(int i=0;i<n;i++){
       cin >> vE[i] >> pecas[i] >> vD[i];
       if(vE[i] == 0){
          res=pecas[i];
          id = i;
       }
   }
   
   
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(vD[id] == vE[j]){
               res+=pecas[j];
               id = j;
            }
        }
   }
   cout << res << endl;
   
   
    
}
