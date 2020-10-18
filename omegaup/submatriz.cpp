#include <iostream>
using namespace std;
//https://omegaup.com/arena/problem/submatriz/
int ren,col,r,c;
int n[1002][1002];
int m[1002][1002];
bool out[1002][1002];
int main(){
        cin>>ren>>col;
        for(int i=0;i<ren;i++){
                for(int j=0;j<col;j++){
                        int a;
                        cin>>a;
                        n[i][j]=a;
                }
        }
        cin>>r>>c;
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        int b;
                        cin>>b;
                        m[i][j]=b;
                }
        }
       for(int i=0;i<ren;i++){
                for(int j=0;j<col;j++){
                        if(n[i][j]==m[0][0]){
                                bool good=true;
                                for(int k=0;k<r;k++){
                                        if(good){
                                                for(int l=0;l<c;l++){
                                                        if(n[i+k][j+l]!=m[k][l]){good=false;break;}
                                                }
                                        }
                                }
                                if(good){
                                        for(int k=0;k<r;k++){
                                                for(int l=0;l<c;l++){
                                                        out[i+k][j+l]=true;
                                                }
                                        }
                                }
                        }
                }
        }
       for(int i=0;i<ren;i++){
                for(int j=0;j<col;j++){
                        cout<<out[i][j]<<" ";
                }
                cout<<endl;
        }

}
