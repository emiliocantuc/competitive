#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/aldp/
int main(){
        int m,n;
        cin>>m;
        int chapas[m];
        for(int i=0;i<m;i++)
                cin>>chapas[i];
        cin>>n;
        int llave,left,right,mid;
        bool found;
        for(int i=0;i<n;i++){
                cin>>llave;
                left=0;
                right=m-1;
                found=false;
                while(left<=right){
                        mid=(left+right)/2;
                        if(chapas[mid]==llave){
                                cout<<mid+1<<" ";
                                found=true;
                                break;
                        }else if(llave<chapas[mid]){
                                right=mid-1;
                        }else{
                                left=mid+1;
                        }
                }
                if(!found)
                        cout<<0<<" ";
        }
}
