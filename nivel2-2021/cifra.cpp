#include <bits/stdc++.h>

using namespace std;

int main(){
    string p,c="";
    cin >> p;
    for(int i=0;i < p.size();i++){
       /* c+=p[i];
        if(p[i] != 'a' and p[i] != 'e' and p[i] != 'i' and p[i] != 'o' and p[i] != 'u'){
            if(p[i] <= 'c')c+='a';
            else if(p[i] >= 'd' and p[i] <= 'g')c+='e';
            else if(p[i] >= 'h' and p[i] <= 'l')c+='i';
            else if(p[i] >= 'm' and p[i] <= 'r')c+='o';
            else if(p[i] >= 's' and p[i] <= 'z')c+='u';

            if(p[i]+1 != 'a' && p[i]+1 != 'e' && p[i]+1 != 'i' && p[i]+1 != 'o' && p[i]+1 != 'u' && p[i]+1 != 'z')c+=p[i]+1;
            else if(p[i] != 'z')c+=p[i]+2;
            else c+=p[i];
        }
        */
        if(p[i] == 'a' or p[i] == 'e' or p[i] == 'i' or p[i] == 'o' or p[i] == 'u')c+=p[i];
        else{
            if(p[i] == 'b')c+= 'bac';
            else if(p[i] == 'c')c+='cad';
            else if(p[i] == 'd')c+='def';
            else if(p[i] == 'f')c+='feg';
            else if(p[i] == 'g')c+='geh';
            else if(p[i] == 'h')c+='hij';
            else if(p[i] == 'j')c+='jik';
            else if(p[i] == 'k')c+='kil';
            else if(p[i] == 'l')c+='lim';
            else if(p[i] == 'm')c+='mon';
            else if(p[i] == 'n')c+='nop';
            else if(p[i] == 'p')c+= 'poq';
            else if(p[i] == 'q')c+='qor';
            else if(p[i] == 'r')c+='ros';
            else if(p[i] == 's')c+='sut';
            else if(p[i] == 't')c+='tuv';
            else if(p[i] == 'v')c+='vux';
            else if(p[i] == 'x')c+='xuz';
            else if(p[i] == 'z')c+='zuz';
        }
    }
    cout << c << endl;
}