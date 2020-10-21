#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/Planetas
int planetas[1002];
float soluciones[1002];
int n;
float suma_fuerzas(float pos){
        float suma=0;
        for(int i=0;i<n;i++)
                if(planetas[i]>pos)
                        suma+=(1/abs(pos-planetas[i]));
                else
                        suma-=(1/abs(pos-planetas[i]));
        return suma;
}
int main(){
        cin>>n;
        for(int i=0;i<n;i++)
                cin>>planetas[i];
        int nSols=0;
        float left,right,mid,suma;
        //cout<<suma_fuerzas(0.382)<<endl;
        for(int i=0;i<n-1;i++){
                //busqueda binaria entre los i y i+1 esimos planetas
                left=planetas[i];
                right=planetas[i+1];
                //cout<<"left:"<<left<<" right:"<<right<<endl;
                while(left<=right){
                        mid=(left+right)/2;
                        suma=suma_fuerzas(mid);
                        //cout<<mid<<" "<<suma<<endl;
                        if(abs(suma)<0.0005){
                                //cout<<"suma:"<<suma<<" sol:"<<mid<<endl;
                                soluciones[nSols++]=mid;
                                break;
                        }else if(0<suma){
                                right=mid-0.0001;
                        }else{
                                left=mid+0.0001;
                        }
                }
        }
        cout<<nSols<<endl;
        for(int i=0;i<nSols;i++)
                printf("%.3f ",soluciones[i]);
                //printf("%.3f ",round(1000.0*soluciones[i])/1000.0);
}
