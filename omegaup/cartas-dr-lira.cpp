#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/CartasDrLira/
int main(){
        int n;
        cin>>n;
        char cartas[n];
        int countDerecho,countReves;
        countDerecho=countReves=0;
        char prev;
        cin>>prev;
        cartas[0]=prev;
        for(int i=1;i<n;i++){
                char carta;
                cin>>carta;
                cartas[i]=carta;
                if(carta==prev){
                        countDerecho++;
                        carta=(carta=='B'?'W':'B');
                }
                prev=carta;
        }
        prev=cartas[n-1];
        for(int i=n-2;i>=0;i--){
                char carta=cartas[i];
                if(carta==prev){
                        countReves++;
                        cartas[i]=(carta=='B'?'W':'B');
                }
                prev=cartas[i];
        }
        cout<<min(countDerecho,countReves);
}
