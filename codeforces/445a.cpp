#include <iostream>
using namespace std;
//https://codeforces.com/contest/445/problem/A

int n,m;
char tablero[102][102];

int main(){
        cin>>n>>m;
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        char c;cin>>c;
                        tablero[i][j]=c;
                }
        }
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        if((i+j)%2==0 && tablero[i][j]=='.'){
                                tablero[i][j]='B';
                        }
                        if((i+j)%2==1 && tablero[i][j]=='.'){
                                tablero[i][j]='W';
                        }
                        cout<<tablero[i][j];
                }
                cout<<endl;
        }
        return 0;

}
